#include <iostream>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]);
void insertSort(int vetor[TAM]);

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    //imprimeVetor(vetor);
    insertSort(vetor);
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

void insertSort(int vetor[TAM])
{
    int i, j, atual;

    for(i = 1; i < TAM; i++) {
        atual = vetor[i];
        j = i -1;
        while(j >= 0 && (atual < vetor[j])) {
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = atual;

        imprimeVetor(vetor);
    }
}
