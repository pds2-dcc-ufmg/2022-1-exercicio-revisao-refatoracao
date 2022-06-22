#include "Ursidae.hpp"

int Ursidae::peixesPorPorcao = 5;

Ursidae::Ursidae() {}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes) {
    return peixesPorPorcao * porcaoPeixes;
}

void Ursidae::setKgPeixeDia(double _kgPeixePorDia) {
    this->kgPeixePorDia = _kgPeixePorDia;
}

void Ursidae::print() {
    std::cout 
        << "\n[Animal]" << std::endl
        << "  Nome: " << nome << std::endl
        << "  Idade: " << idade << std::endl
        << "  Família: Ursidae" << std::endl
        << "  Especie: " << especie << std::endl;
}