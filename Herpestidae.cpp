#include"Herpestidae.hpp"

double Herpestidae::racaoConsumida(int porcoesConsumidas){

    return porcoesConsumidas;
}

void Herpestidae::print() {

    Animal::print();
    std::cout << "  Especie: " << especie <<endl;
}