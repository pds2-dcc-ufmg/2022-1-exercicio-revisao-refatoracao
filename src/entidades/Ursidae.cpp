#include "Ursidae.hpp"

Ursidae::Ursidae(string nome, int idade, string especie, Alimentacao& alimentacao, Cuidador& cuidador) : Animal(nome, idade, "Ursidae", especie, alimentacao, cuidador){
    this->_consumoDePeixe = this->_PEIXESPORPORCAO * alimentacao.getPorcao();
};

Ursidae::Ursidae(string nome, int idade) : Animal(nome, idade, "Ursidae"){};

Ursidae::Ursidae(string nome, int idade, string especie) : Animal(nome, idade, "Ursidae", especie){};

int Ursidae::getConsumo(){
    return this->_consumoDePeixe;
}