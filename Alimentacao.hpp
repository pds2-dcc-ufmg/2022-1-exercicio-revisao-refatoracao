
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include"Cuidador.hpp"

using namespace std;

class Alimentacao{

public:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuidador;
    string nomeAnimal;
    double quantidadeConsumida;

    void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif