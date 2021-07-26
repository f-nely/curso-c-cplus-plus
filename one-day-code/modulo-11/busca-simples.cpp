#include <iostream>
#include <stdlib.h>
#define TAM 10

using namespace std;

void imprimeVetor(int *vetor);
int buscaSimple(int vetor[], int valorProcurado, int * posicaoEncontrada);

int main()
{
    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98, 2};
    int valorProcurado;
    int posicao, posicaoEncontrada;
    bool valorFoiEncontrado;

    imprimeVetor(vetor);

    printf("\n\nQual número deseja encontrar?\t");
    scanf("%d", &valorProcurado);

    if(buscaSimple(vetor, valorProcurado, &posicaoEncontrada)) {
        cout << "\nO valor foi encontrado na posição: \t" << posicaoEncontrada << endl;
    } else {
        cout << "\nValor não foi encontrado: " << endl;
    }

    return 0;
}

void imprimeVetor(int *vetor)
{
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " - ";
    }
}

int buscaSimple(int vetor[TAM], int valorProcurado, int * posicaoEncontrada)
{
    bool valorFoiEncontrado;
    for(int i = 0; i < TAM; i++) {
        if (vetor[i] == valorProcurado) {
            valorFoiEncontrado = true;
            *posicaoEncontrada = i;
        }
    }

    if (valorFoiEncontrado) {
        return 1;
    } else {
        return -1;
    }
}
