#include "Ursidae.hpp"

void Ursidae::print() {
    cout << "\n[Animal]" << "  Nome: " << this->nome << "  Idade: " << this->idade << "  Família: Ursidae" << "  Especie: " << this->especie << endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    double x;
    return peixesPorPorcao*porcaoPeixes;
}