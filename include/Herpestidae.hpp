#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"
#include <iostream>

using namespace std;

class Herpestidae : public Animal {
  private:
    string especie;
    double quantPorcao = 1;

  public:
    Herpestidae(string _especie, string _idade, string _nome);
    double kgConsumidosDeRacao(int porcoesConsumidas);
    int getQuantPorcao();
    virtual void print() override;
};

#endif
