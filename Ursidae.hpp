#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal.hpp"

class Ursidae : public Animal
{
    public:
        std::string especie;
        double kgPeixePorDIA;
        int peixesPorPorcao = 5;

        void print() override;
        double PeixesConsumidos(double porcaoPeixes);
};

#endif
