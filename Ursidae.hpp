#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;


class Ursidae {
    
    public:
        static int peixesPorPorcao;
        int idade;
        string nome;
        string especie;
        double kgPeixePorDia;

    public:
        void print();
        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);
};

#endif