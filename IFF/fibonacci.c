#include <stdio.h>
#include <stdlib.h>

int fibonacci_n_esimo_termo(int n, int n1, int n2);

int main(int argc, char const *argv[])
{
    int n;
    int n1, n2;
    printf("Qual o termo da sequencia deseja saber?\n");
    scanf("%d", &n);
    printf("Digite o primeiro termo\n");
    scanf("%d", &n1);
    printf("Digite o segundo termo\n");
    scanf("%d", &n2);
    printf("O %d numero da sequencia de fibonacci = %d\n\n", n, fibonacci_n_esimo_termo(n, n1, n2));
    return 0;
}

int fibonacci_n_esimo_termo(int n, int n1, int n2)
{
    if (n == 1)
        return n1;
    if (n == 2)
        return n2;

    for (int i = 0; i < n - 1; i++)
    {
        n2 += n1;
        n1 = n2 - n1;
    }
    return n1;
}

