#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

double const kgPorPorcao = 1;

class Herpestidae : public Animal {    
    public:
        Herpestidae(string nome, int idade);
        Herpestidae(string nome, int idade, string especie);
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print() override;
};

#endif