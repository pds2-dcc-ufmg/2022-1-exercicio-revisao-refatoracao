#include <iostream>
#include <string>
#include "Herpestidae.hpp"

void Herpestidae::setEspecie(std::string _especie)
{
  this->species = _especie;
}

string Herpestidae::getEspecie()
{
  return this->species;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas)
{
  double c = quantPORCAO * porcoesConsumidas;
  return c;
}

void Herpestidae::print()
{
  Animal::print();

  std::cout << "  Especie: " << species << endl;
}