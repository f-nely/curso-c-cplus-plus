#include <iostream>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]);
void quickSort(int vetor[], int inicio, int fim);

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    quickSort(vetor, 0, TAM);

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

void quickSort(int vetor[], int inicio, int fim)
{
    int pivo, esq, dir, meio, aux;

    esq = inicio;
    dir = fim;

    meio = (int) ((esq + dir) / 2);
    pivo = vetor[meio];

    while(dir > esq) {
        while(vetor[esq] < pivo) {
            esq = esq + 1;
        }

        while(vetor[dir] > pivo) {
            dir = dir - 1;
        }

        if(esq <= dir) {
        aux = vetor[esq];
        vetor[esq] = vetor[dir];
        vetor[dir] = aux;

        esq = esq + 1;
        dir = dir - 1;
        }
        imprimeVetor(vetor);
    }

    if(inicio < dir) {
        quickSort(vetor, inicio, dir);
    }

    if(esq < fim) {
        quickSort(vetor, esq, fim);
    }

}
