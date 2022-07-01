#include "Ursidae.hpp"

double const Ursidae :: PEIXES_POR_PORCAO = 5;

Ursidae :: Ursidae (int idade, string nome, string especie, double kgPeixePorDia) {
   this->idade = idade;
    this->especie = especie;
    this->nome = nome;
    this->familia = "Ursidae";
    this->kgPeixePorDia = kgPeixePorDia;
}


void Ursidae::print() {
    std::cout << "\n[Animal]" << "\n  Nome: " << getNomeAnimal() << "\n  Idade: " << getIdadeAnimal() << "\n  Família: Ursidae" << "\n  Especie: " << getEspecieUrsidae() << std::endl;
}


void Ursidae :: calcula_peixes_consumidos(double porcaoPeixes) {
    this->_kgPeixePorDia = PEIXES_POR_PORCAO*porcaoPeixes;
}

int Ursidae :: getKgPeixePorDia() {
    return this->_kgPeixePorDia;
}

int Ursidae :: getPeixesPorPorcao() {
    return this->PEIXES_POR_PORCAO;
}
