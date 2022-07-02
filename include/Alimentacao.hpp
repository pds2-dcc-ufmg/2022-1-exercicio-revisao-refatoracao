#ifndef VENDA_H
#define VENDA_H

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{

    private:
        int _porcao;
        string _comida;
        string _descricao;
        string _cuidador;
        string _nome;

    public:
        Alimentacao(int porcao, string comida, string descricao, string cuidador, string nome);
        void print();
        int getPorcao();

};

#endif