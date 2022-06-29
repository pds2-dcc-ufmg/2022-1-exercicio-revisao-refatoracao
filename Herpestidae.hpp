#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

double quantPORCAO = 1;

class Herpestidae : public Animal
{

public:
    string species;

    double kgConsumidosDeRacao(int porcoesConsumidas);

    void print();
};

#endif
