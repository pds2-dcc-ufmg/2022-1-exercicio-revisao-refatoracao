#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {

    private:
        std::string species;
        double quantPORCAO = 1;

    public:
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print();
};

#endif
