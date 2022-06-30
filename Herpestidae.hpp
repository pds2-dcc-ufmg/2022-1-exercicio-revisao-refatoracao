#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

using namespace std;

double quantPORCAO = 1;


class Herpestidae : public Animal {

    public:

    public:
  string species;

    double kgConsumidosDeRacao(int porcoesConsumidas) {
        double c = quantPORCAO*porcoesConsumidas;
                  return c;
    }


    void print() {

        Animal::print();



        std::cout << "  Especie: " << species <<endl;

    }
};

#endif
