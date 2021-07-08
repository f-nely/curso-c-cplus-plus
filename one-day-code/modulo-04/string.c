#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[255];

    printf("Digite uma palavra: \n");
    // limpar buffer
    setbuf(stdin, 0);

    // ler string
    fgets(palavra, 255, stdin);

    palavra[strlen(palavra)-1] = '\0';

    printf("%s", palavra);

    return 0;
}
