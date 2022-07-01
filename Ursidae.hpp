#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;


class Ursidae: public Animal {
    private:
        int peixesPorPORCAO = 5;
    public:

        int idade;
        string nome;
        string especie;
        double kgPeixePorDIA;
        void print();
        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);
};

#endif

