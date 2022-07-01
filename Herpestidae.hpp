#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {
public:
    string especie;
    double quantPorcao = 1;
    
    double kgConsumidosDeRacao(int porcoesConsumidas);
    void print();
};

#endif
