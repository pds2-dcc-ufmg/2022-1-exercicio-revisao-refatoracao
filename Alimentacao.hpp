#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include"Cuidador.hpp"
#include<iomanip>
#include<sstream>
#include<iostream>

using std::cout;
using std::endl;

class Alimentacao{

    private:

    int porcao;
    string comida;
    string descricao;
    string nomeAnimal;
    Cuidador cuidador;

    public:

    Alimentacao(string _comida, string _descricao, string _nomeAnimal, int _porcao, Cuidador _cuidador);

    Alimentacao();

    ~Alimentacao();

    void print();

    int getPorcao();

    string getDescricao();

    void setPorcao(int quantidade);

    void setComida(string tipoDeComida);

};

#endif