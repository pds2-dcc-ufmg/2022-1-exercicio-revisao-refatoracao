#ifndef VENDA_HPP
#define VENDA_HPP

#include <iostream>
#include "Cuidador.hpp"

using namespace std;

class Alimentacao{
    private:
        int _porcao;
        string _comida;
        string _descricao;
        Cuidador* _cuid = nullptr;
        string _nomeAnimal;

    public:
        Alimentacao(int porcao, string comida, string descricao, Cuidador* cuid, string nomeAnimal);
        void print();
        int getPorcao();
};

#endif