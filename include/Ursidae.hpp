#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

#include <iostream>
#include <iomanip>
#include <string>


class Ursidae : public Animal {
    private:
        static int peixesPorPorcao;
        double kgPeixePorDia;

    public:
        Ursidae();
        double calculaPeixesConsumidos(int porcaoPeixes);
        void setKgPeixeDia(double _kgPeixePorDia);
        void print();

};

#endif

