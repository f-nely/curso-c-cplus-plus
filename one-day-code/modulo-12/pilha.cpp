#include <iostream>
#include <stdlib.h>
#include "functions.h"
#define TAM 10

using namespace std;

int main()
{
    int pilha[TAM];
    int topo = -1;

    insertValuesArr(pilha);

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


