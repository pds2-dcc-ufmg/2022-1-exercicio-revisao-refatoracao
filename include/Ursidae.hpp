#ifndef ursidae_HPP
#define ursidae_HPP
#include <iostream>
using namespace std;

class Ursidae {
    private:
        int peixesPorPORCAO = 5;
        int IDADE;
        string nome;
        string especie;
        double kgPeixePorDIA;
    public:
        Ursidae(string, string, int, double);
        void print();
        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);

};

#endif

