#include <stdio.h>
#include <stdlib.h>

int retornarDez();

int sum(int , int);

int main()
{
    int a;
    a = retornarDez();
    printf("%d\n", a);

    int n1 = 12, n2 = 8;
    printf("A soma entre %d e %d é %d\n", n1, n2, sum(n1, n2));

    return 0;
}

int retornarDez()
{
    return 10;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
