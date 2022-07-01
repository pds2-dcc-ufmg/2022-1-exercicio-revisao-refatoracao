
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao
{
public:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuidador;
    string animal;

    void ImprimirAlimentacao()
};

#endif