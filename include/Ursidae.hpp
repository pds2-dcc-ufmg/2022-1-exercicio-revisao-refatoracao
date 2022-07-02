#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

#include "Animal.hpp"

using namespace std;

class Ursidae : public Animal {
  private:
    string especie;
    double kgPeixePorDia;
    int peixesPorPorcao = 5;

  public:
    Ursidae();
    Ursidae(int _idade, string _nome, string _especie, double _kgPeixePorDia);
    double getPeixesPorPorcao();
    virtual void print() override;

};

#endif

