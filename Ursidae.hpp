#ifndef URSIDAE_H
#define URSIDAE_H
#define peixesPorPorcao 5

#include "Animal.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

class Ursidae : public Animal{
    private:
        double kgPeixePorDIA;
    
    public:
        void print();
        double calculaPeixesConsumidos(int porcaoPeixes);
};

#endif