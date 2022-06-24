#include "Herpestidae.hpp"

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    double c = quantPORCAO*porcoesConsumidas;
    return c;
}

void Herpestidae::print() {
    Animal::print();
    cout << "  Especie: " << species <<endl;
}

double Herpestidae::quantPORCAO = 1;