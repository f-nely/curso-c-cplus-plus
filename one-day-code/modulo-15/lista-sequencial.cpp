#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void insertValueArr(int vetor[]);
int *alocaVetor(int tam);
void imprimeVetor(int *vetor, int tamanhoLista);

int main()
{
    int vetor[TAM] = {1, 2, 3}, tamanhoLista;

    imprimeVetor(vetor, 3);

    //insertValueArr(vetor);

    //imprimeVetor(vetor, 3);

    printf("\nDigite o tamanho do vetor:");
    scanf("%d", &tamanhoLista);

    int *vetorLidoNaHora;

    vetorLidoNaHora = alocaVetor(tamanhoLista);

    for(int i = 0; i < tamanhoLista; i++) {
        printf("\nInforme um valor:");
        scanf("%d", &vetorLidoNaHora[i]);
    }

    imprimeVetor(vetorLidoNaHora, tamanhoLista);

    int *vetorEmCPlusPlus = new int[5];

    for(int i = 0; i < 5; i++) {
        printf("\nInforme um valor:");
        scanf("%d", &vetorEmCPlusPlus[i]);
    }

    imprimeVetor(vetorEmCPlusPlus, 5);

    return 0;
}

void insertValueArr(int vetor[])
{
    for(int i = 0; i < TAM; i++) {
        printf("\nInforme um valor: \n");
        scanf("%d", &vetor[i]);
    }
}

int *alocaVetor(int tam)
{
    int *v;

    v = (int *) malloc(tam * sizeof(int));

    return v;
}

void imprimeVetor(int *vetor, int tamanhoLista)
{
    for(int i = 0; i < tamanhoLista; i++) {
        printf("\nValor %d: %d", i, vetor[i]);
    }
}
