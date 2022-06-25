
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include <string>
#include <iostream>

#include"Cuidador.hpp"

using namespace std;

class Alimentacao{

    private:
    int porcao;
    string comida;
    string descricao;
    string cuidador;
    string nomeAnimal;

    public:
    Alimentacao(int _porcao, string _comida, string _cuidador, string _animal, string _descricao);
    void print();
    int getPorcao();
    void setPorcao(int _porcao);
    void setComida(string _comida);
};

#endif
