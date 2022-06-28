#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include <iostream>

using namespace std;

class Alimentacao{
    private:
    int porcao;
    string comida;
    string descricao;
    string nomeAnimal;
    
    public:
    Cuidador cuid;
    Alimentacao(int _porcao,string _comida,string _descricao,string _nomeAnimal);
    void print();
    int getPorcao();
    void setPorcao(int _quantidade);
    void setComida(string _tipo);
};
#endif
