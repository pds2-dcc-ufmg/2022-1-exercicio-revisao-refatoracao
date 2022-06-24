#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;


class Ursidae {
    
    public:
        static int peixesPorPORCAO;
        int IDADE;
        string nome;
        string especie;
        double kgPeixePorDIA;

    public:
        void print();
        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);
};

#endif