#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 20;

    printf("Valor de a: %d\n", a);
    //printf("Endereço de a: %d\n", &a);
    cout << "Endereço de a: " << &a << "\n";

    int b = 10;
    int * ponteiro;
    ponteiro = &b;

    cout << "Valor de b: " << b << "\n";
    cout << "Endereço de b: " << &b << "\n";
    cout << ponteiro << endl;

    *ponteiro = 40;
    cout << "Valor de b: " << b << "\n";

    return 0;
}
