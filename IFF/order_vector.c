#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int LEN = 100;
int v[LEN];

void print_v()
{
    printf("[ ");
    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", v[i]);
    }
    printf("]\n\n");
}

void quick_sort(int *a, int left, int right)
{
    int i, j, x, y;

    i = left;
    j = right;
    x = a[(left + right) / 2];

    while (i <= j)
    {
        while (a[i] < x && i < right)
        {
            i++;
        }
        while (a[j] > x && j > left)
        {
            j--;
        }
        if (i <= j)
        {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }

    if (j > left)
    {
        quick_sort(a, left, j);
    }
    if (i < right)
    {
        quick_sort(a, i, right);
    }
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    for (int i = 0; i < LEN; i++)
    {
        v[i] = rand() % 100;
    }
    print_v();
    quick_sort(v, 0, LEN - 1);
    print_v();
    return 0;
}
