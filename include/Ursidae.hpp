#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

#include <iostream>
#include <iomanip>

double const peixesPorPorcao = 5;

class Ursidae : public Animal{
    private:
        double kgPeixePorDia;
    
    public:
        Ursidae(string nome, int idade);
        Ursidae(string nome, int idade, string especie, double kgPeixePorDia);
        void print() override;
        double calculaPeixesConsumidos(int porcaoPeixes);
};

#endif