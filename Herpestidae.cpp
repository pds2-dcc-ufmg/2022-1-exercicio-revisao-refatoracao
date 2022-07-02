#include "Herpestidae.hpp"

void Herpestidae::imprimirInformacoes() {
  Animal::imprimirInformacoes();
  std::cout << "  Especie: " << this->_especie << std::endl;
}