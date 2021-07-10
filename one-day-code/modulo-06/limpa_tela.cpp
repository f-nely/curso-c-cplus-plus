#include <stdio.h>
#include <stdlib.h>

void limpaTela();

int main()
{
    int a;
    printf("Digite uma valor para a: \n");
    scanf("%d", &a);

    limpaTela();

    return 0;
}

void limpaTela()
{
    system("clear");
}
