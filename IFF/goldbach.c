#include <stdio.h>
#include <stdlib.h>

int primo(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    return c == 2;
}

int conjectura(int n)
{
    if (!(n % 2 == 0 & n > 3))
        return 0;

    int primos[n];
    int p = 0;

    for (int i = 2; i < n; ++i)
    {
        if (primo(i))
        {
            primos[p] = i;
            p++;
        }
    }
    for (int i = 0; i < p - 1; i++)
    {
        for (int j = i + 1; j < p; j++)
        {
            if (n == (primos[i] + primos[j]))
            {
                printf("%d + %d = %d", primos[i], primos[j], n);
                return 1;
            }
        }
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    printf("%d \n", conjectura(10));
    return 0;
}
