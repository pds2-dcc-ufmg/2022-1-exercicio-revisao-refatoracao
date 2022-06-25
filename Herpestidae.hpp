#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

using namespace std;

double quantPorcao = 1;


class Herpestidae : public Animal {

    public:

    public:
        string especies;

        double kgConsumidosDeRacao(int porcoesConsumidas) {
            double c = quantPorcao*porcoesConsumidas;
            return c;
        }

        void print() {
            Animal::print();
            std::cout << "  Especie: " << especies <<endl;
        }
};

#endif
