#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;

int peixesPorPorcao = 5;

class Ursidae
{
public:
    int idade;
    string nome;
    string especie;
    double kgPeixePorDia;

    void print()
    {
        cout << "\n[Animal]" << endl
             << "  Nome: " << nome << endl
             << "  Idade: " << idade << endl
             << "  Familia: Ursidae" << endl
             << "  Especie: " << especie << endl;
    }

    double calculaPeixesConsumidos(int porcaoPeixes)
    {
        double x;
        return peixesPorPorcao * porcaoPeixes;
    }
};

#endif
