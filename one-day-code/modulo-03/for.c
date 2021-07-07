#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 9;

    for (int i = 0; i <= 10; i++) {
        printf("\n%d x %d = %d", numero, i, i * numero);
    }

    printf("\n");

    return 0;
}
