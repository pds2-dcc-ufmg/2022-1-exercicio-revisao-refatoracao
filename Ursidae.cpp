#include "Ursidae.hpp"

#include <iostream>

Ursidae::Ursidae(std::string _idade, std::string _familia, std::string _nome,
                 std::string _especie)
    : Animal(_idade, _familia, _nome), especie(_especie) {}

void Ursidae::infoAnimal() {
  std::cout << "\n[Animal]" << std::endl
            << "  Nome: " << this->nome << std::endl
            << "  Idade: " << this->idade << std::endl
            << "  Família: " << this->familia << std::endl
            << "  Especie: " << this->especie << std::endl;
}
