#include <iostream>
#include "Herpestidae.hpp"

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    double c = quantPorcao*porcoesConsumidas;
    return c;
}

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << especie << std::endl;
}
