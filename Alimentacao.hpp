#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{

    public:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuid;
    string nomeAnimal;


    void print();

};

#endif