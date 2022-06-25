#include "Ursidae.hpp"

Ursidae::Ursidae (string idade, string especie, string nome, double kgPeixePorDia) {
    this->idade = idade;
    this->especie = especie;
    this->nome = nome;
    this->familia = "Ursidae";
    this->kgPeixePorDia = kgPeixePorDia;
}

string Ursidae::getEspecieUrsidae () {
    return this->especie;
}

void Ursidae::print() {
    std::cout << "\n[Animal]" << "\n  Nome: " << getNomeAnimal() << "\n  Idade: " << getIdadeAnimal() << "\n  Família: Ursidae" << "\n  Especie: " << getEspecieUrsidae() << std::endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    return peixesPorPorcao * porcaoPeixes;
}