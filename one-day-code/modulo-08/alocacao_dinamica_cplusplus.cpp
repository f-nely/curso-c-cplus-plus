#include <stdio.h>
#include <stdlib.h>
#include <new>

int main()
{
    int tamanho, i;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    int *vetor = new int[tamanho];

    for (i = 0; i < tamanho; i++) {
        vetor[i] = i;
        printf("%d\n", vetor[i]);
    }

    return 0;
}
