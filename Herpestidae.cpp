#include "Herpestidae.hpp"

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    return quantPorcao*porcoesConsumidas;
}

void Herpestidae::print() {
    Animal::print();
    cout << "  Especie: " << species <<endl;
}

double Herpestidae::quantPorcao = 1;