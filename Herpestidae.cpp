#include <iostream>
#include <string>
#include "Herpestidae.hpp"

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas)
{
  this->kgRacao = QTD_PORCAO * porcoesConsumidas;
  return this->kgRacao;
}

void Herpestidae::print()
{
  Animal::print();
}