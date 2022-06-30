#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

class Alimentacao{

    public:
    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuid;
    std::string nomeAnimal;


    void print();

};

#endif