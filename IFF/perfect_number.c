#include<stdio.h>
#include<stdlib.h>

int perfeito(int n)
{
    int soma_dos_divisores = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if (n % i == 0)
        {
            soma_dos_divisores += i;
        }
    }
    return soma_dos_divisores == n;
}

int main(int argc, char const *argv[])
{
    int quantidade;
    printf("Digite um valor inteiro para listarmos todos os numeros perfeitos até este valor");
    scanf("%d", &quantidade);
    for (int i = 1; i < quantidade; ++i)
    {
        if (perfeito(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
