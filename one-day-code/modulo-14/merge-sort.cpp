#include <iostream>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]);
void merge(int vetor[], int indiceEsq, int meio, int indiceDir);
void mergeSort(int vetor[], int indiceEsq, int indiceDir);

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    mergeSort(vetor, 0, TAM-1);
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

void merge(int vetor[], int indiceEsq, int meio, int indiceDir)
{
    int i, j, k;
    int n1 = meio - indiceEsq + 1;
    int n2 = indiceDir - meio;

    int vetorEsquerdo[n1], vetorDireito[n2];

    for(i = 0; i < n1; i++) {
        vetorEsquerdo[i] = vetor[indiceEsq + i];
    }

    for(j = 0; j < n2; j++) {
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = indiceEsq;

    while(i < n1 && j < n2) {
        if(vetorEsquerdo[i] <= vetorDireito[j]) {
            vetor[k] = vetorEsquerdo[i];
            i++;
        } else {
            vetor[k] = vetorDireito[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }
    while(j < n2) {
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int indiceEsq, int indiceDir)
{
    if(indiceEsq < indiceDir) {
        int meio = indiceEsq + (indiceDir - indiceEsq) / 2;

        mergeSort(vetor, indiceEsq, meio);
        mergeSort(vetor, meio+1, indiceDir);

        imprimeVetor(vetor);

        merge(vetor, indiceEsq, meio, indiceDir);
    }
}




