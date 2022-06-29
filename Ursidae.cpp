#include "Ursidae.hpp"

Ursidae::Ursidae(string nome, int idade, string especie, Alimentacao& alimentacao, Cuidador& cuidador) : Animal(nome, idade, "Ursidae", especie, alimentacao, cuidador){
    this->_consumoDePeixe = 0;
};

void Ursidae::calculaConsumo(){
    this->_consumoDePeixe = this->_PEIXESPORPORCAO * this->_alimentacao->getPorcao();
}

int Ursidae::getConsumo(){
    return this->_consumoDePeixe;
}