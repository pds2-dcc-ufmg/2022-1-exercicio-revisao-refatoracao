#include "../include/Herpestidae.hpp"

const double QUANTIDADE_PORCAO = 1;

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie) :
    Animal(_nome, _idade, "Herpestidae"), especie(_especie) {}

void Herpestidae::print() {

    Animal::print();

    std::cout << "  Especie: " << this->especie << std::endl;

}

double Herpestidae::getConsumoDeRacao(int consumo) {
    
    return consumo * QUANTIDADE_PORCAO;

}