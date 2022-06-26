
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include <iostream>

using namespace std;

class Alimentacao{

    protected:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuidador;
        string nome_animal;
    public:
        void print();
        void setPorcao(int _porcao);
        void setComida(string _comida);
        void setDescricao(string _descricao);
        void setNome_animal(string _nome_animal);
        int getPorcao();
        string getDescricao();
        void setCuidador(Cuidador _cuidador);
};

#endif