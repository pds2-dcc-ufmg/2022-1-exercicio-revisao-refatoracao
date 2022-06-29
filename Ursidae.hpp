#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;

int peixesPorPORCAO = 5;

class Ursidae
{
public:
    int IDADE;
    string nome;
    string especie;
    double kgPeixePorDIA;

    void print();

    double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);
};

#endif
