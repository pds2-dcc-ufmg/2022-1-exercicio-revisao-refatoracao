#ifndef Ursidae_HPP
#define Ursidae_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

using namespace std;

// int peixesPorPORCAO = 5;

class Ursidae : public Animal {
    private:
        string especie;
        double kgPeixePorDia;

    public:
        Ursidae(string idade, string especie, string nome, double kgPeixePorDia);

        string getEspecie();
        double getKgPeixePorDia();

        void print();

        double calculaPeixesConsumidos(int porcaoPeixes);
};

#endif