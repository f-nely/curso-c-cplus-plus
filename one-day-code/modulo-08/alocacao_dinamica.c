#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho);

int main()
{
    int *vetor, tamanho, i;

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    vetor = alocaVetor(tamanho);

    // inserindo valor
    for (i = 0; i < tamanho; i++) {
        vetor[i] = i * 2;
    }

    // imprimindo vetor
    for (i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }

    free(vetor);

    return 0;
}

int* alocaVetor(int tamanho)
{
    int *aux;

    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}
