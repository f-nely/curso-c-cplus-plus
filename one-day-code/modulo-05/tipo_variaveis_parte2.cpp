#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define TAM 3

using namespace std;

int main()
{
    int myArray[TAM], i;

    for (i = 0; i < TAM; i++) {
        cout << "Informe um valor: ";
        cin >> myArray[i];
    }

    for (i = 0; i < TAM; i++) {
        cout << myArray[i] << "\n";
    }

    int matriz[TAM][TAM] = {8, 1, 4, 9, 15, 0, 7, 20, 13};

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
