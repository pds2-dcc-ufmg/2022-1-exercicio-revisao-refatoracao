#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

#include <iostream>
#include <iomanip>

#define PEIXESPORPORCAO 5

class Ursidae : public Animal {
    
    private:
        double kgPeixePorDia;

    public:
        void print();
        double calcularPeixesConsumidos(int porcaoPeixes);
};

#endif

