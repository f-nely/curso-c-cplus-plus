#include <iostream>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]);
void selectionSort(int vetor[]);

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    selectionSort(vetor);
    imprimeVetor(vetor);
    return 0;
}

void imprimeVetor(int vetor[])
{
    cout << "\n";

    for(int i = 0; i < TAM; i++) {
        cout << "|" << vetor[i] << "| ";
    }
}

void selectionSort(int vetor[])
{
    int posicaoDoMenorValor, aux, i, j;

    for(i = 0; i < TAM; i++) {
        posicaoDoMenorValor = i;

        for(j = i+1; j < TAM; j++) {
            if(vetor[j] < vetor[posicaoDoMenorValor]) {
                posicaoDoMenorValor = j;
            }
        }

        if(posicaoDoMenorValor != i) {
            aux = vetor[i];
            vetor[i] = vetor[posicaoDoMenorValor];
            vetor[posicaoDoMenorValor] = aux;
        }
        imprimeVetor(vetor);
    }
}
