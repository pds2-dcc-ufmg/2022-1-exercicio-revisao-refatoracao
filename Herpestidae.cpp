#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie) : Animal("Herpestidae", _nome, _idade) {
    this->especie = _especie;
}

void Herpestidae::mostrarInfo() {
    Animal::mostrarInfo();
    std::cout << "  Especie: " << this->especie << std::endl;
}