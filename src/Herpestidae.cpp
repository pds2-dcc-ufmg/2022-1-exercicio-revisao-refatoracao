#include "Herpestidae.hpp"

int Herpestidae::quantidadeDaPorcao = 1;

Herpestidae::Herpestidae() {};

double Herpestidae::calculaConsumoRacaoKg(int porcoesConsumidas) {
    double c = quantidadeDaPorcao * porcoesConsumidas;
    return c;
}

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << especie << std::endl;
}