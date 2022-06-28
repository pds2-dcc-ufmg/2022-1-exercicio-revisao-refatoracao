#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

using namespace std;

class Ursidae : public Animal{
    private:
    string especie;
    double kgPeixePorDia;
    
    public:
    static int peixesPorPorcao;

    Ursidae(int _idade, string _nome, string _especie, double _kgPeixePorDia);
    void print() override;
    double calculaPeixesConsumidos(int porcaoPeixes);
};
#endif
