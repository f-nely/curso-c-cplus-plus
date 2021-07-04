#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    float b = 2.5;
    char c = 'x';

    if (a == 5) {
        printf("A variável a é igual a 5\n");
    }

    if (b == 2.5) {
        printf("A variável b é igual a 2.5\n");
    }

    if (c == 'x') {
        printf("A variável c é igual a x\n");
    }

    if (a % 2 == 1) {
        printf("A variáve a é ímpar\n");
    } else {
        printf("A variáve a é par\n");
    }

    return 0;
}
