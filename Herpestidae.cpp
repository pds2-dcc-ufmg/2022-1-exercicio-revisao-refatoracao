#include <iostream>
#include <string>
#include "Herpestidae.hpp"

double Herpestidae::KgConsumidosDeRacao(int porcoes_consumidas)
{
  double total = quant_porcao * porcoes_consumidas;
  return total;
}

void Herpestidae::ImprimirEspecie()
{
  Animal::ImprimirAnimal();

  std::cout << "Especie: " << especie << std::endl;
}