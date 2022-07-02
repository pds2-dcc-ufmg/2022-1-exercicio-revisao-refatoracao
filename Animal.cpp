#include "Animal.hpp"

void Animal::imprimirInformacoes() {
  std::cout << "\n[Animal]" << "\n  Nome: " << this->_nome 
  << "\n  Idade: " << this->_idade  << "\n  Familia: " << this->_familia << std::endl;
}

std::string Animal::getNome() {
  return this->_nome;
}