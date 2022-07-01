#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie, double _kg_peixe_dia) : Animal("Ursidae", _nome, _idade) {
    this->especie = _especie;
    this->kg_peixe_dia = _kg_peixe_dia;
}

void Ursidae::mostrarInfo() {
    Animal::mostrarInfo();
    std::cout << "  Especie: " << this->especie << std::endl;
}
