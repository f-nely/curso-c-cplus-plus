#include <iostream>
#define TAM 10

using namespace std;

void insertValueArr(int arr[TAM]);
void imprimeVetor(int vetor[TAM]);
void fila_construtor(int *frente, int *tras);
void enfileirar(int fila[TAM], int valor, int *tras);
int tamanhoFila(int frente, int tras);
void desenfileirar(int fila[TAM], int *frente, int tras);
bool isEmpty(int frente, int tras);
bool isFull(int *tras);

void insertValueArr(int arr[TAM])
{
    for(int i = 0; i < TAM; i++)
        arr[i] = 0;
}

void imprimeVetor(int vetor[TAM])
{
    cout << "\n";

    for(int i = 0; i < TAM; i++)
        cout << vetor[i] << " - ";
}

void fila_construtor(int *frente, int *tras)
{
    *frente = 0;
    *tras = -1;
}

void enfileirar(int fila[TAM], int valor, int *tras)
{
    if (isFull(tras)) {
        cout << "Fila cheia!";
    } else {
        *tras = *tras + 1;
        fila[*tras] = valor;
    }
}

int tamanhoFila(int frente, int tras)
{
    return (tras - frente) + 1;
}

void desenfileirar(int fila[TAM], int *frente, int tras)
{
    if (isEmpty(*frente, tras)) {
        cout << "\nImpossível desenfileirar uma lista vazia!";
    } else {
        cout << "\nO valor " << fila[*frente] << " foi removido!\n";
        fila[*frente] = 0;
        *frente = *frente + 1;
    }
}

bool isEmpty(int frente, int tras)
{
    if (frente > tras)
        return true;
    else
        return false;
}

bool isFull(int *tras)
{
    if (*tras == TAM -1)
        return true;
    else
        return false;
}
