#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

double quantPORCAO = 1;

class Herpestidae : public Animal {
    private:
        std::string especie;
    public:
        Herpestidae(std::string _especie,Animal animal);
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print();
};

#endif