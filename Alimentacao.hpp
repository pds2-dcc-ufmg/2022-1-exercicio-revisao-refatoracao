
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include <iostream>

using namespace std;

class Alimentacao{

    public:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuidador;
        string nome_animal;

        void print();
};

#endif