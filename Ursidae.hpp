#ifndef URSIDADE_HPP
#define URSIDADE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Ursidae {
    public:
        int peixes_por_porcao = 5;
        int idade;
        string nome;
        string especie;
        double kg_peixe_diario;

        void print();
        double peixesConsumidos(int porcaoPeixes);
};

#endif

