#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

using namespace std;

double quantPORCAO = 1;


class Herpestidae : public Animal {    
    public:
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print();
};

#endif