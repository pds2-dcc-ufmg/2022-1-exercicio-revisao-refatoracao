#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {

    public:
        static double quantPorcao;
        string species;

    public:
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print();
};

#endif