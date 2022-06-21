#ifndef URSIDAE_H
#define URSIDAE_H
#define peixesPorPorcao 5

#include "Animal.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

class Ursidae : public Animal{
    private:
        double kgPeixePorDia;
    
    public:
        Ursidae(string nome, int idade, string especie, double kgPeixePorDia);
        void print() override;
        double calculaPeixesConsumidos(int porcaoPeixes);
};

#endif