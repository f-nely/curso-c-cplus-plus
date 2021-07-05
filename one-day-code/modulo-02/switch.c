#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 1;
    char b = 'x';

    switch (a) {

        case 1:
            printf("Opção escolhida: 1\n");
            break;

        case 2:
            printf("Opção escolhida: 2\n");
            break;

        case 3:
            printf("Opção escolhida: 3\n");
            break;

        default:
            printf("Opção inválhida\n");
            break;
    }

    switch (b) {

        case 'x':
            printf("A letra é x\n");
            break;

        case 'z':
            printf("A letra é z\n");
            break;

        default:
            printf("Opção inválida\n");
            break;
    }
}
