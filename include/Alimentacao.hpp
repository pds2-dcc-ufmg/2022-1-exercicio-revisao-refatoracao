#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

class Alimentacao
{
public:
    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuidador;
    std::string nomeAnimal;

    Alimentacao() {}
    void print();
};

#endif