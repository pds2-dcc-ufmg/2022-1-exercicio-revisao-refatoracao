#include "Herpestidae.hpp"

Herpestidae :: Herpestidae(int idade, string nome, string especie) : Animal(idade, this->_familia, nome) {
    this->_especie = especie;
}

void Herpestidae :: print() {
    Animal::print();
    std::cout << "  Especie: " << this->_especie <<endl;
}

double Herpestidae :: kgConsumidosDeRacao(int porcoesConsumidas) {
    return QUANT_PORCAO*porcoesConsumidas;
}