#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>

#include "../Animal/Animal.hpp"

using namespace std;

int peixesPorPORCAO = 5;

class Ursidae : public Animal {
    public:

        int IDADE;
        string nome;
        string especie;
        double kgPeixePorDIA;

        void print();
        double calcula_PEIXES_CONSUMIDOS(const unsigned int porcaoPeixes);
};

#endif

