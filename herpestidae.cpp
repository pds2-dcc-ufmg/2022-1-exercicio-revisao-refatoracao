#include "Herpestidae.hpp"

Herpestidae :: Herpestidae(int idade, string nome, string especie) : Animal(idade, nome) {
    this->_especie = especie;
}

void Herpestidae :: print() {
   
    std::cout << "[Animal]" << std::endl;
    
    std::cout << "  Nome: " << _nome << std::endl;
    std::cout << "  Idade: " << _idade << std::endl;
    std::cout << "  Família: " << _familia << std::endl;
    std::cout << "  Espécie: " << _especie << std::endl << std::endl;
}


void Herpestidae :: kgConsumidosDeRacao(int porcoesConsumidas) {
    this->_kgDeRacaoPorDia = QUANT_PORCAO*porcoesConsumidas;
}

int Herpestidae :: getRacaoConsumida() {
    return this->_kgDeRacaoPorDia;
}
