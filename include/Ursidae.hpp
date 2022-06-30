#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

int peixesPorPORCAO = 5;

class Ursidae {
    private:

        int IDADE;
        string nome;
        string especie;
        double kgPeixePorDIA;

    public:
        void print();

        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);

};

#endif

