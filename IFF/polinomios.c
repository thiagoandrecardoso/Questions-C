#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n = 4;
    int a = 1;
    int x = 3;
    int P[n + 1];
    int Q[n + 1];
    int P_mais_Q[n + 1];
    int Q_vezes_Q[n + 1];
    int p = 0;

    for (int i = n; i >= 0; --i)
    {
        P[p] = a * pow(x, (n - p));
        // printf("%d = %d * %d ^ (%d-%d)\n", P[p], a, x, n, p);
        p++;
    }

    a = 2;
    x = 2;

    for (int i = n; i > 0; --i)
    {
        Q[p] = a * pow(x, (n - p));
        p++;
    }

    for (int i = 0; i < n + 1; i++)
    {
        P_mais_Q[i] = P[i] + Q[i];
        Q_vezes_Q[i] = P[i] * Q[i];
    }

    printf("P + Q\n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d  ", P_mais_Q[i]);
    }

    printf("\nP x Q\n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d  ", Q_vezes_Q[i]);
    }
    printf("\n");

    return 0;
}
