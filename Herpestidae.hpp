#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

#define KGPORPORCAO 1

class Herpestidae : public Animal {

    public:
        void print();
        double calcularKgConsumidosDeRacao(int porcoesConsumidas);
        
};

#endif
