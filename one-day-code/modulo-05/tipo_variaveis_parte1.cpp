#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    int a;
    float b;
    char c;
    bool d;

    a = 10;
    b = 2.8;
    c = 'y';
    d = true;

    printf("\nValor: %d", a);
    printf("\nValor: %.2f", b);
    printf("\nValor: %c", c);
    printf("\nValor: %d", d);

    std::cout << "\n\nImprimindo com c++" << std::endl;

    std::cout << "\nValor: " << a << std::endl;
    std::cout << "Valor: " << b << std::endl;
    std::cout << "Valor: " << c << std::endl;
    std::cout << "Valor: " << d << std::endl;

    scanf("%d", &a);
    printf("\n%d", a);

    return 0;
}
