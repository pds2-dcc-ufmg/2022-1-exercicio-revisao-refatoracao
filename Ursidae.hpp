#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
using namespace std;
class Ursidae :public Animal{
    public:
        string especie;
        double kgPeixePorDIA;
        int peixesPorPORCAO;
        void print();
        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);

};

#endif