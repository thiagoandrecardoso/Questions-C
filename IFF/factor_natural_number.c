#include <stdio.h>
#include <stdlib.h>

void fatorar_numero_natural(int n)
{
    int n_aux = n;
    int exp = 0;
    int n_div = 2;
    int print_x = 0;
    printf("%d = ", n);

    while (n > 1)
    {
        if (n_aux % n_div == 0)
        {
            while (n_aux % n_div == 0)
            {
                n /= n_div;
                n_aux = n;
                exp++;
            }
            if (exp > 1)
            {
                printf("%d^%d", n_div, exp);
                exp = 0;
            }
            else
            {
                exp = 0;
                printf("%d", n_div);
            }
            n_div++;
            print_x = 1;
        }
        else{
            print_x = 0;
            n_div++;
        }
        if(n != 1 && print_x == 1) printf(" x ");
    }
}

int main(int argc, char const *argv[])
{
    printf("Digite um valor\n");
    int n;
    scanf("%d", &n);
    fatorar_numero_natural(n);
    printf("\n");
    return 0;
}
