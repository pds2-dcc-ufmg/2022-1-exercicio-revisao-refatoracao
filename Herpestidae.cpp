#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string nome, int idade, string especie, Alimentacao& alimentacao, Cuidador& cuidador) : Animal(nome, idade, "Herpestidae", especie, alimentacao, cuidador){
    this->_consumoDeRacao = 0;
};

void Herpestidae::calculaConsumo(){
    this->_consumoDeRacao = this->_RACAOPORPORCAO * this->_alimentacao->getPorcao();
}

int Herpestidae::getConsumo(){
    return this->_consumoDeRacao;
}