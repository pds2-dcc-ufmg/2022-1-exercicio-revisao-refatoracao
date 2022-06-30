#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

int peixesPorPorcao = 5;

class Ursidae {
    private:

        int idade;
        string nome;
        string especie;
        double kgPeixePorDia;

    public:
        void print();

        double calculaPeixesConsumidos(int porcaoPeixes);

};

#endif

