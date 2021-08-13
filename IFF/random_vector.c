#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int maior_elemento(int v[], int len);
int menor_elemento(int v[], int len);
int quantidade_pares(int v[], int len);

int main(int argc, char const *argv[])
{
    const int LEN = 10000;
    srand(time(NULL));
    int v[LEN];

    for (int i = 0; i < LEN; i++)
    {
        v[i] = rand() % 10000;
    }

    printf("Maior valor = %d\n", maior_elemento(v, LEN));
    printf("Menor valor = %d\n", menor_elemento(v, LEN));
    int q_pares = quantidade_pares(v, LEN);
    int q_impares = LEN - q_pares;

    printf("Quantidade de pares = %d\n", q_pares);
    printf("Quantidade de impares = %d\n", q_impares);

    return 0;
}

int maior_elemento(int v[], int len)
{
    int maior = v[0];

    for (int i = 1; i < len; i++)
    {
        if (v[i] > maior)
            maior = v[i];
    }
    return maior;
}

int menor_elemento(int v[], int len)
{
    int menor = v[0];

    for (int i = 1; i < len; i++)
    {
        if (v[i] < menor)
            menor = v[i];
    }
    return menor;
}

int quantidade_pares(int v[], int len)
{
    int q = 0;
    for (int i = 1; i < len; i++){
        if (v[i] % 2 == 0)
        {
            q++;
        }
    }
    return q;
}
