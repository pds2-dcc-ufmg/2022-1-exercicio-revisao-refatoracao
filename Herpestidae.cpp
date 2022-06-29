#include <iostream>
#include <string>
#include "Herpestidae.hpp"

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas)
{
  this->kgRacao = quantPORCAO * porcoesConsumidas;
  return this->kgRacao;
}

void Herpestidae::print()
{
  Animal::print();
}