#include "Herpestidae.hpp"

Herpestidae::Herpestidae (string idade, string especie, string nome) {
    this->idade = idade;
    this->especie = especie;
    this->nome = nome;
    this->familia = "Herpestidae";
}

string Herpestidae::getEspecie() {
    return this->especie;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    return quantidadePorcao * porcoesConsumidas;
}


void  Herpestidae::printHerpestidae() {
    Animal::printAnimal();
    std::cout << "  Especie: " << getEspecie() <<std::endl;
}