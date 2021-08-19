#include <stdio.h>
#include <stdlib.h>

int const WALL = 0;
int const WAY = 1;
int **mat_laby;

void aloc_mat(int n);
int manual_filling(int n);
int in_out_laby(int n);
int add_way_just_outside_board(int n, int i, int j, int v);
void print_mat_laby(int n);

int main(int argc, char const *argv[])
{  
    int n;
    int op;
    printf("Informe o valor de n\n");
    scanf("%d", &n);
    aloc_mat(n);

    printf("Digite 1 para preenchimento manual\n");
    printf("Digite 2 para preenchimento automatico\n");
    scanf("%d", &op);

    manual_filling(n);
    print_mat_laby(n);
    return 0;
}

void aloc_mat(int n)
{
    mat_laby = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat_laby[i] = malloc(n * sizeof(int));
}

int manual_filling(int n)
{
    if (n > 10)
    {
        printf("Preenchimento manual apenas para n <= 10l\n");
        return 0;
    }

    in_out_laby(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int aux;
            if (mat_laby[i][j] != 1)
            {
                printf("[%d][%d]", i, j);
                scanf("%d", &aux);
                if (add_way_just_outside_board(n, i, j, aux))
                {
                    mat_laby[i][j] = aux;
                }
                else
                {
                    --j;
                }
            }
        }
    }

    return 1;
}

int in_out_laby(int n)
{
    printf("Indique as coordenadas de entrada e saida [x][y] -> [x1][y1]\n");
    int x, y, x1, y1;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &x1);
    scanf("%d", &y1);
    mat_laby[x][y] = 1;
    mat_laby[x1][y1] = 1;
    return 1;
}

int add_way_just_outside_board(int n, int i, int j, int v)
{
    if ((i == n - 1 || j == n - 1) && v == 1)
        return 0;
    return 1;
}

void print_mat_laby(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat_laby[i][j]);
        }
        printf("\n");
    }
}
