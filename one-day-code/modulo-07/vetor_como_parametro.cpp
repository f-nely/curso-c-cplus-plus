#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void inserirValor(int arr[]);
void imprimeVetor(int arr[]);
void modificaVetor(int arr[]);

int main()
{
    int myArray[TAM];
    inserirValor(myArray);
    imprimeVetor(myArray);
    modificaVetor(myArray);
    imprimeVetor(myArray);
}

void inserirValor(int arr[])
{
    for (int i = 0; i < TAM; i++) {
        printf("Informe um valo: \n");
        scanf("%d", &arr[i]);
    }
}

void imprimeVetor(int arr[])
{
    printf("\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d\n", arr[i]);
    }
}

void modificaVetor(int arr[])
{
    for (int i = 0; i < TAM; i++) {
        arr[i] = arr[i] * 2;
    }
}
