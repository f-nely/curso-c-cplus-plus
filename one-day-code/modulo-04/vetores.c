#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{
    int myArray[TAM];

    myArray[0] = 5;
    myArray[1] = 10;
    myArray[2] = 12;

    printf("\n%d", myArray[0]);
    for (int i = 0; i < TAM; i++) {
        printf("\nPosição %d : %d", i, myArray[i]);
    }

    printf("\n");

    for (int i = 0; i < TAM; i++) {
        scanf("%d", &myArray[i]);
    }

    for (int i = 0; i < TAM; i++) {
        printf("\nPosição %d : %d", i, myArray[i]);
    }

    printf("\n");

    return 0;
}
