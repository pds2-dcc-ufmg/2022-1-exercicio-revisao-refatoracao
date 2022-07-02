#include "Herpestidae.hpp"


Herpestidae::Herpestidae(std::string familia, std::string nome, uint idade, std::string especie) : 
    Animal(familia, nome, idade), especie(especie) {
        this->print();
}

double Herpestidae::calcularConsumoRacao(const int porcoesConsumidas) {
    double quantidadeTotalConsumida = QUANTIDADEPORCAO*porcoesConsumidas;
    return quantidadeTotalConsumida;
}


void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << especie << std::endl;
}