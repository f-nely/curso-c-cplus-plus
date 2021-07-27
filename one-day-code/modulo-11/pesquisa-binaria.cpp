#include <iostream>
#include <stdlib.h>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]);
int buscaBinaria(int vetor[], int valorProcurado);

int main()
{
    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98, 101};
    int valorProcurado;

    imprimeVetor(vetor);

    printf("\n\nQual número deseja encontrar?\t");
    scanf("%d", &valorProcurado);

    if (buscaBinaria(vetor, valorProcurado) != -1) {
        cout << "\nO valor foi encontrado na posição: \t" << buscaBinaria(vetor, valorProcurado) << endl;
    } else {
        cout << "Valor não foi encontrado: " << endl;
    }

    return 0;
}

void imprimeVetor(int vetor[])
{
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " - ";
    }
}

int buscaBinaria(int vetor[TAM], int valorProcurado)
{
    int esquerda = 0;
    int direita = TAM - 1;
    int meio;


    while (esquerda <= direita) {
        meio = (esquerda + direita) / 2;

        if (valorProcurado == vetor[meio]) {
            return meio;
        }
        if (vetor[meio] < valorProcurado) {
             esquerda = meio + 1;
        }
        if (vetor[meio] > valorProcurado){
             direita = meio - 1;
        }

}

    return -1;
}
