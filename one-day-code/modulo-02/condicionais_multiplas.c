#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 10;

    if ((a > 5) && (a < 15)) {
        printf("A variável 'a' está entre 5 e 15\n");
    }

    if ((a > 5) || (a < 15)) {
        printf("A variável 'a' é maior que 5 ou 15\n");
    }
}
