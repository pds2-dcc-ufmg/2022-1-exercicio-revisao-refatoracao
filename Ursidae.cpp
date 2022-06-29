#include <iostream>
#include <string>
#include "Ursidae.hpp"

void Ursidae::setkgPeixe(double _peixe)
{
  this->kgPeixePorDIA = _peixe;
}

double Ursidae::getkgPeixe()
{
  return this->kgPeixePorDIA;
}
void Ursidae::print()
{
  std::cout << "[Animal]" << std::endl;
  Animal::print();
  std::cout << "  Espécie: " << especie << endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes)
{
  return peixesPorPORCAO * porcaoPeixes;
}