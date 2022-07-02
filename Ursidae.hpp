#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"
#include <iostream>
#include <iomanip>

class Ursidae : public Animal
{
    private:
    int peixesPorPorcao;
    double kgPeixePorDia;
    
    public:
    Ursidae();
    Ursidae(int _idade, std::string _nome);
    virtual void print() override;
    double calculaPeixesConsumidos(int porcaoPeixes);
    int getPeixesPorPorcao();
    double getKgPeixePorDia();
    void setKgPeixePorDia(double _valor);
};

#endif

