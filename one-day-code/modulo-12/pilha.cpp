#include <iostream>
#include <stdlib.h>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM]);
void push(int pilha[TAM], int valor, int *topo);
void pop(int pilha[TAM], int *topo);
bool isEmpty(int topo);
bool isFull(int topo);
int lengthStack(int topo);
int topStack(int pilha[TAM], int *topo);

int main()
{
    int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int topo = -1;

    imprimeVetor(pilha);

    push(pilha, 5, &topo);
    imprimeVetor(pilha);
    push(pilha, 7, &topo);
    imprimeVetor(pilha);

    cout << "\nÚltimo valor da pilha: " << topStack(pilha, &topo);

    push(pilha, 7, &topo);
    push(pilha, 2, &topo);
    push(pilha, 6, &topo);
    cout << "\nTamanho da pilha: " << lengthStack(topo);
    push(pilha, 8, &topo);
    push(pilha, 1, &topo);
    push(pilha, 9, &topo);
    push(pilha, 11, &topo);
    push(pilha, 22, &topo);
    imprimeVetor(pilha);

    pop(pilha, &topo);
    imprimeVetor(pilha);

    cout << "\n";

    return 0;
}

void imprimeVetor(int vetor[TAM])
{
    cout << "\n";
    for(int i = 0; i < TAM; i++) {
        cout << vetor[i] << " - ";
    }
}

void push(int pilha[TAM], int valor, int *topo)
{
    if (isFull(*topo)) {
        cout << "\nPilha cheia!\n";
    } else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pop(int pilha[TAM], int *topo)
{
    if (isEmpty(*topo)) {
        cout << "\nA pilha já está vazia!\n";
    } else {
        cout << "\nValor removido: " << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

bool isEmpty(int topo)
{
    if (topo == -1)
        return true;
    else
        return false;
}

bool isFull(int topo)
{
    if (topo == TAM -1)
        return true;
    else
        return false;
}

int lengthStack(int topo)
{
    return topo + 1;
}

int topStack(int pilha[TAM], int *topo)
{
    if (isEmpty(*topo)) {
        cout << "A pilha está vazia!";
        return 0;
    } else {
        return pilha[*topo];
    }
}
