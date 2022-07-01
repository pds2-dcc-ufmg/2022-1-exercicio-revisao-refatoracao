#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{
public:
    int porcao;
    string comida;
    string descricao;
    string nomeAnimal;
    Cuidador cuid;

    void print();
};

#endif
