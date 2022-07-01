#include <iostream>
#include <string>
#include "Ursidae.hpp"

void Ursidae::ImprimirAnimal() override
{
  cout << "\n[Animal]" << std::endl
       << "  Nome: " << nome << std::endl
       << "  Idade: " << idade << std::endl
       << "  Família: Ursidae" << std::endl
       << "  Especie: " << especie << std::endl;
}

double Ursidae::CalcularPeixesConsumidos(int porcaoPeixes)
{
  return peixes_por_porcao * porcaoPeixes;
}