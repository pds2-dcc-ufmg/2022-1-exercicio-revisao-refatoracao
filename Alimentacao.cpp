#include <iostream>
#include <string>
#include "Alimentacao.hpp"

void Alimentacao::ImprimirAlimentacao()
{
  std::cout << "Animal: " << animal.nome << std::endl;
  std::cout << "Cuidador: " << cuidador.nome << std::endl;
  std::cout << "Alimentacao: " << comida << std::endl;
  std::cout << "Descricao: " << descricao << std::endl;
}