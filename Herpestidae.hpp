#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

using namespace std;
class Herpestidae : public Animal {
  public:
  string especie;
  double quantPORCAO;
  double kgConsumidosDeRacao(int porcoesConsumidas);
  void print();
};

#endif