#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    while (opcao < 1 || opcao > 5) {

        printf("\nEscolha uma opção: ");
        printf("\n1 - Opção 1: ");
        printf("\n2 - Opção 2: ");
        printf("\n3 - Opção 3: \n");

        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("\nOpção 1 foi escolhida: \n");
            break;
        case 2:
            printf("\nOpção 2 foi escolhida: \n");
            break;
        case 3:
            printf("\nOpção 3 foi escolhida: \n");
            break;
        default:
            printf("\nOpção inválida: \n");
            break;
        }
    }


    return 0;
}

