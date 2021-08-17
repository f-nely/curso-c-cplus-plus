#include <iostream>
#include "functions.h"
#define TAM 10

using namespace std;

int main()
{
    int fila[TAM];
    int frente, tras;
    int valor;

    insertValueArr(fila);

    fila_construtor(&frente, &tras);
    enfileirar(fila, 5, &tras);
    enfileirar(fila, 2, &tras);
    enfileirar(fila, 5, &tras);
    enfileirar(fila, 2, &tras);
    enfileirar(fila, 5, &tras);
    enfileirar(fila, 2, &tras);
    enfileirar(fila, 5, &tras);
    enfileirar(fila, 2, &tras);
    enfileirar(fila, 5, &tras);
    enfileirar(fila, 2, &tras);
    enfileirar(fila, 5, &tras);
    enfileirar(fila, 2, &tras);
    imprimeVetor(fila);

    desenfileirar(fila, &frente, tras);
    desenfileirar(fila, &frente, tras);
    desenfileirar(fila, &frente, tras);
    imprimeVetor(fila);

    return 0;
}


