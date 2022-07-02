#include "Ursidae.hpp"

void Ursidae::imprimirInformacoes() {
  Animal::imprimirInformacoes();
  std::cout << "  Especie: " << this->_especie << std::endl;
}