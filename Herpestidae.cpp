#include "Herpestidae.hpp"

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << especie << std::endl;
}

double Herpestidae::calcularKgConsumidosDeRacao(int porcoesConsumidas) {
    double c = KGPORPORCAO*porcoesConsumidas;
    return c;
}
