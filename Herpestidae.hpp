#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        std::string especie;
        double quantPORCAO = 1;
    public:
        Herpestidae(std::string _especie,Animal animal);
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print();
};

#endif