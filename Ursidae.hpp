#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>

class Ursidae {
    private:
        int IDADE;
        std::string nome;
        std::string especie;
        double kgPeixePorDIA;
        int peixesPorPORCAO = 5;

    public:
        void print();
        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);
};

#endif

