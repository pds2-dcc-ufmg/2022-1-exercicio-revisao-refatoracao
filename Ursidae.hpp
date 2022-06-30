#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>

#define PEIXESPORPORCAO 5

class Ursidae {
    private:
        int idade;
        std::string nome;
        std::string especie;
        double kgPeixePorDia;

    public:
        void print();
        double calcularPeixesConsumidos(int porcaoPeixes);
};

#endif

