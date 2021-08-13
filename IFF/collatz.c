#include <stdio.h>
#include <stdlib.h>

int maior_n = 4;

int collatz(int n)
{
    if (n > maior_n)
        maior_n = n;
    if (n == 1)
    {
        return n;
    }
    else
    {
        if ((n % 2) == 0)
            return collatz(n / 2);
        else
            return collatz((3 * n) + 1);
    }
}

int main(int argc, char const *argv[])
{
    int n0;
    printf("Digite um valor:\n");
    scanf("%d", &n0);
    collatz(n0);
    printf("Maior numero da sequencia: %d\n", maior_n);
    return 0;
}
