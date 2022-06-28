#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

double quantidadePorcao = 1;

class Herpestidae : public Animal
{

public:
    string especie;

    double kgConsumidosDeRacao(int porcoesConsumidas)
    {
        double c = quantidadePorcao * porcoesConsumidas;
        return c;
    }

    void print()
    {

        Animal::print();

        cout << "  Especie: " << especie << endl;
    }
};

#endif
