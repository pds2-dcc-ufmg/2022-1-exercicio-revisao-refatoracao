#include "Herpestidae.hpp"
Herpestidae::Herpestidae(){}

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie) : Animal(_nome, _idade, "Herpestidae") {
    this->especie = _especie;
}

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << this->especie << std::endl;
}


double Herpestidae::calcularRacaoConsumida(int porcoesConsumidas) {
    double racaoPorPorcao = 1;
    return  racaoPorPorcao * porcoesConsumidas;
}

