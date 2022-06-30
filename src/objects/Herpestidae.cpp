#include "Herpestidae.hpp"

double  Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    double c = quantPorcao*porcoesConsumidas;
    return c;
}


void  Herpestidae::print() {

    Animal::print();
    cout << "  Especie: " << species <<endl;

}