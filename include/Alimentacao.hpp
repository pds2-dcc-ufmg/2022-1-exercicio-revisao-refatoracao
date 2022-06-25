
#ifndef VENDA_HPP
#define VENDA_HPP

#include <iostream>
#include "Cuidador.hpp"

using namespace std;

class Alimentacao{

    private:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuid;
        string nomeAnimal;

    public:
        Alimentacao();
        Alimentacao(int porcao, string comida, string descricao, Cuidador cuidador, string nomeAnimal);

        int getPorcao();
        string getComida();
        string getDescricao();
        Cuidador getCuidador();
        string getNome();
        void setPorcao(int porcao);

        void print();
};

#endif