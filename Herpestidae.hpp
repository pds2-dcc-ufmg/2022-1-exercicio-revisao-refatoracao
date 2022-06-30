#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"




class Herpestidae : public Animal {

    public:

    public:
  std::string species;
  double quantPORCAO = 1;

    double kgConsumidosDeRacao(int porcoesConsumidas);
    void print();
};

#endif
