#include <iostream>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]);
void bubleSort(int vetor[]);

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    bubleSort(vetor);
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

void bubleSort(int vetor[])
{
    int aux;
    for(int i = 0; i < TAM; i++) {
        for(int j = i+1; j < TAM; j++) {
            imprimeVetor(vetor);
            if(vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
