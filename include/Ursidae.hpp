#ifndef ursidae_HPP
#define ursidae_HPP

#include "Animal.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

class Ursidae : public Animal {
    private:
        const string _FAMILIA = "Ursidae";
        string _especie;
        double _kgPeixePorDia = 0;
        static double const PEIXES_POR_PORCAO;

    public:
        Ursidae (int idade, string nome, string especie, double kgPeixePorDia);
        void print() override;
        void calcula_peixes_consumidos(double porcaoPeixes);
        int getKgPeixePorDia();
        int getPeixesPorPorcao();
};

#endif

