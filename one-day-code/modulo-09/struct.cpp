#include <iostream>
#include <string>
#include <new>

using namespace std;

struct Fruta
{
    string cor;
    string nome;
};

int main()
{
    Fruta *primeiraFruta = new Fruta;
    primeiraFruta->cor = "Verde";
    primeiraFruta->nome = "Maça";

    cout << "Fruta: " << primeiraFruta->nome << " , Cor: " << primeiraFruta->cor << endl;

    Fruta *listaFrutas = new Fruta[2];
    listaFrutas[0].cor = "Amarela";
    listaFrutas[0].nome = "Laranja";
    listaFrutas[1].cor = "Verde";
    listaFrutas[1].nome = "Limão";

    for (int i = 0; i < 2; i++) {
        cout << "Fruta: " << listaFrutas[i].nome << " , Cor: " << listaFrutas[i].cor << endl;
    }

    return 0;
}
