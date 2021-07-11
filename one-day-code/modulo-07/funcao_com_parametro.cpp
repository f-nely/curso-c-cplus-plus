#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int num);
int retornaAntecessor(int num);

int main()
{
    int a;

    printf("Digite um valor: \n");

    scanf("%d", &a);

    mostraSucessor(a);

    printf("O antecessor de %d é %d\n", a, retornaAntecessor(a));

    return 0;
}

void mostraSucessor(int num)
{
    printf("O sucessor de %d é %d\n", num, num+1);
}

int retornaAntecessor(int num)
{
    return num - 1;
}
