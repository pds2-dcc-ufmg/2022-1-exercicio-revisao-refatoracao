#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>

#include "Animal.hpp"

int peixesPorPORCAO = 5;

class Ursidae : public Animal {
    private:
        double kgPeixePorDIA;
        std::string especie;
    public:
        Ursidae(double peixe_por_dia,std::string _especie,Animal animal);
        virtual void print()override;
        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);

};

#endif