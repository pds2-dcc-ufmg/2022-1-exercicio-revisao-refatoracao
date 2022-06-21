#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

using namespace std;

double quantPORCAO = 1;


class Herpestidae : public Animal {    
    public:
        Herpestidae(string nome, int idade, string especie);
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print() override;
};

#endif