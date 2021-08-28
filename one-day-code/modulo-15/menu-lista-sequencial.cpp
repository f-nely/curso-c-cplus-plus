#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct Pessoa
{
    string nome;
    int rg;
};

void imprimeSequencial(Pessoa *ponteiroSequencial, int tamanhoLista);

void limpaTela();

int main()
{
    int funcaoDesejada = 1;

    Pessoa *ponteiroSequencial;

    int tamanhoLista = 0;

    Pessoa *exemploListaSequencial = new Pessoa[2];

    exemploListaSequencial[0].nome = "John";
    exemploListaSequencial[0].rg = 123;
    exemploListaSequencial[1].nome = "Nikita";
    exemploListaSequencial[1].rg = 321;

    ponteiroSequencial = exemploListaSequencial;

    imprimeSequencial(ponteiroSequencial, 2);

    while(funcaoDesejada < 10 && funcaoDesejada > 0) {
        cout << "Operações\n";
        cout << "1 - Inserção de um node no início da Lista\n";
        cout << "2 - Inserção de um node no fim da Lista\n";
        cout << "3 - Inserção de um node na posição N\n";
        cout << "4 - Retirar um node do início da lista\n";
        cout << "5 - Retirar um node do fim da lista\n";
        cout << "6 - Retira um node na posição N\n";
        cout << "7 - Procurar um node com o campo RG\n";
        cout << "8 - Imprimir a Lista\n";
        cout << "9 - Sair do sistema.\n";
        cout << "\nEscolha um número e pressione ENTER:\n";

        cin >> funcaoDesejada;

        limpaTela();

        switch(funcaoDesejada) {
            case 1:
                cout << "Função escolhida: 1";
                break;
            case 2:
                cout << "Função escolhida: 2";
                break;
        }
    }

    return 0;
}

void imprimeSequencial(Pessoa *ponteiroSequencial, int tamanhoLista)
{
    for(int i = 0; i < tamanhoLista; i++) {
        cout << i << " - " << ponteiroSequencial[i].nome << ", " << ponteiroSequencial[i].rg << endl;
    }
}

void limpaTela()
{
    system("clear");
}
