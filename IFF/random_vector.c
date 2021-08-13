#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior(int v[], int tamanho)
{
    int maior = v[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}

int menor(int v[], int tamanho)
{
    int menor = v[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }
    return menor;
}

int retorna_qntd_pares(int v[], int tamanho)
{
    int q = 0;
    for (int i = 1; i < tamanho; i++)
    {
        if (v[i] % 2 == 0)
        {
            q++;
        }
    }
    return q;
}

int retorna_qntd_impares(int v[], int tamanho)
{
    int q = 0;
    for (int i = 1; i < tamanho; i++)
    {
        if (v[i] % 2 != 0)
        {
            q++;
        }
    }
    return q;
}

int main()
{
    srand(time(NULL));
    int vetor[10000];

    for (int i = 0; i < 10000; i++)
    {
        vetor[i] = rand() % 10000;
    }

    printf("Maior valor = %d\n", maior(vetor, 10000));
    printf("Menor valor = %d\n", menor(vetor, 10000));

    printf("Quantidade de pares = %d\n", retorna_qntd_pares(vetor, 10000));
    printf("Quantidade de impares = %d\n", retorna_qntd_impares(vetor, 10000));

    return 0;
}
