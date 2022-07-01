#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Ursidae {
public:
    int peixesPorPorcao = 5;
    int idade;
    string nome;
    string especie;
    double kgPeixePorDia;

    void print();
    double calcularPeixesConsumidos(int porcaoPeixes);
};

#endif

