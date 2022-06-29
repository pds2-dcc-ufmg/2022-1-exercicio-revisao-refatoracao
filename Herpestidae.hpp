#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

double qtd_porcoes = 1;

class Herpestidae : public Animal 
{
    private:
        std::string especie;

    public:
        double racao_consumida(int porcoes_consumidas);
        void print();
};

#endif
