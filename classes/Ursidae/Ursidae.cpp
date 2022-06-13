#include <iostream>

#include "./Ursidae.hpp"

void Ursidae::print() {
    std::cout << "\n[Animal]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << IDADE << std::endl
              << "  Família: Ursidae" << std::endl
              << "  Especie: " << especie << std::endl;
    return;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(const unsigned int porcaoPeixes){
    return peixesPorPORCAO*porcaoPeixes;
}