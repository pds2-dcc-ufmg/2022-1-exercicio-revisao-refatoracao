#ifndef ursidae_HPP
#define ursidae_HPP

#include "Animal.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

class Ursidae : public Animal {
    private:
        string _familia = "Ursidae";
        string _especie;
        double _kgPeixePorDia;
        const int PEIXES_POR_PORCAO = 5;

    public:
        Ursidae (int idade, string nome, string especie, double kgPeixePorDia);
        void print() override;
        double calcula_peixes_consumidos(int porcaoPeixes);
};

#endif

