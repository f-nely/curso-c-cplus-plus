#include <stdio.h>
#include <stdlib.h>
#include <new>

int main()
{
    int linhas, colunas, i, j;
    int **matriz;

    printf("Digite o número de linhas: \n");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: \n");
    scanf("%d", &colunas);

    matriz = (int **) new int[linhas];

    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *) new int[colunas];
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}

