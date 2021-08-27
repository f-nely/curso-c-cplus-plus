#include <iostream>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]);
void shellSort(int vetor[]);

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    shellSort(vetor);
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

void shellSort(int vetor[])
{
    int i, j, atual;
    int h = 1;

    while(h < TAM) {
        h = 3*h+1;
    }

    while(h > 1) {
        h = h / 3;

        for(i = h; i < TAM; i++) {
            atual = vetor[i];
            j = i - h;
        while(j >= 0 && (atual < vetor[j])) {
            vetor[j+h] = vetor[j];
            j = j - h;
        }
            vetor[j+h] = atual;

            imprimeVetor(vetor);
        }
    }

}



