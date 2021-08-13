#include <stdio.h>
#include <stdlib.h>

int fib(int n, int n1, int n2)
{
    int auxiliar;
    if (n == 1)
        return n1;
    if (n == 2)
        return n2;

    for (int i = 0; i < n - 1; i++)
    {
        auxiliar = n1 +  n2;
        n1 = n2;
        n2 = auxiliar;
    }
    return n1;
}

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
    printf("O %d numero da sequencia de fibonacci = %d\n\n", n, fib(n, n1, n2));
    return 0;
}



