#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 3;

    printf("Soma de %d e %d = %d\n",a, b, a + b);

    printf("Subtração de %d e %d = %d\n",a, b, a - b);

    printf("Multiplicação de %d e %d = %d\n",a, b, a * b);

    printf("Divisão de %d e %d = %d\n",a, b, a / b);

    printf("O resto da divisão entre %d e %d = %d\n",a, b, a % b);

    printf("O valor absoluto de -3 = %d\n", abs(-3));

    return 0;
}
