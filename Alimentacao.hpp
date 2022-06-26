#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H
#include "Cuidador.hpp"
#include "Animal.hpp"

using namespace std;

class Alimentacao{

private:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuidador;
    Animal animal;
    int kgConsumidos;

public:
    //Inicializa as variaveis da classe alimentacao
    Alimentacao(int _porcao, string _comida, string _descricao, Cuidador _cuidador, Animal _animal);

    //Informa detalhes sobre a alimentação no zoológico
    void print();

    //Permite o acesso as variaveis privadas da classe fora dela
    int getPorcao();
    string getDescricao();
};

#endif