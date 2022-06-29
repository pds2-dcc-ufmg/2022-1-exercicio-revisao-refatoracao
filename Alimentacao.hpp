
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

class Alimentacao
{

public:
    virtual void print();
    void setPorcao(int);
    double getPorcao();
    void setVendedor(Cuidador);
    Cuidador getVendedor();
    void setComida(std::string);
    std::string getComida();
    void setDescricao(std::string);
    std::string getDescricao();
    void setNomeAnimal(std::string);
    std::string getNomeAnimal();

private:
    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuid;
    std::string nomeAnimal;

    void print();
};

#endif