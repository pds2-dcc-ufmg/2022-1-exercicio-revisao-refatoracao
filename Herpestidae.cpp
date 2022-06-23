#include "Herpestidae.hpp"

Herpestidae :: Herpestidae(int idade, string nome, string especie) : Animal(idade, this->_familia, nome) {
    this->_especie = especie;
}

void Herpestidae :: print() {
    Animal::print();
    std::cout << "  Especie: " << this->_especie <<endl;
}

void Herpestidae :: kgConsumidosDeRacao(int porcoesConsumidas) {
    this->_kgDeRacaoPorDia = QUANT_PORCAO*porcoesConsumidas;
}

int Herpestidae :: getRacaoConsumida() {
    return this->_kgDeRacaoPorDia;
}