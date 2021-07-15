#include <stdio.h>
#include <string.h>

struct Palavra
{
    int ordem;
    char letra;
    char texto[255];
};

int main()
{
    struct Palavra primeiraPalavra;
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'p';
    strcpy(primeiraPalavra.texto, "palavrinha");

    printf("Ordem : %d, Primeira letra: %c , Palavra: %s \n", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);

    struct Palavra listaDePalavra[3];
    listaDePalavra[0].ordem = 0;
    listaDePalavra[1].ordem = 1;
    listaDePalavra[0].letra = 'd';
    listaDePalavra[1].letra = 'l';
    strcpy(listaDePalavra[0].texto, "Dahora");
    strcpy(listaDePalavra[1].texto, "Legal");

    for (int i = 0; i < 2; i++) {
        printf("Ordem : %d, Primeira letra: %c , Palavra: %s \n", listaDePalavra[i].ordem, listaDePalavra[i].letra, listaDePalavra[i].texto);
    }

    return 0;
}
