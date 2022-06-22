#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

#include <string>

class Herpestidae : public Animal {
    private:
        static int quantidadeDaPorcao;

    public:
        Herpestidae();
        double calculaConsumoRacaoKg(int porcoesConsumidas);
        void print();
};

#endif
