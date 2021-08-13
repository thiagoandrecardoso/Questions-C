#include <stdio.h>
#include <stdlib.h>

int verifica_par_maior_que_3(int n)
{
    return (n % 2 == 0 & n > 3);
}

int eh_primo(int n)
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
    if (!verifica_par_maior_que_3(n))
        return 0;

    int primos[n];
    int p = 0;

    for (int i = 2; i < n; ++i)
    {
        if (eh_primo(i))
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
