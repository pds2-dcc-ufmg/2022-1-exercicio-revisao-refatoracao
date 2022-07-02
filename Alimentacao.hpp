
#ifndef VENDA_HPP
#define VENDA_HPP

#include <iostream> //Tava sem?
#include "Cuidador.hpp"

using std::string;

class Alimentacao{

    public:
        int porcao;
        string comida;
        string descricao;
        Cuidador *cuid = nullptr;
        string nomeAnimal;


    Alimentacao(int _porcao, string _comida, string _descricao, 
        Cuidador* _cuid, string _nomeAnimal);
    void print();

};

#endif