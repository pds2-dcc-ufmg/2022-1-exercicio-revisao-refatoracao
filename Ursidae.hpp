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
        int _kgPeixePorDia;
        static int const PEIXES_POR_PORCAO;

    public:
        Ursidae (int idade, string nome, string especie, double kgPeixePorDia);
        void print() override;
        void calcula_peixes_consumidos(int porcaoPeixes);
        int getKgPeixePorDia();
        int getPeixesPorPorcao();
};

#endif

