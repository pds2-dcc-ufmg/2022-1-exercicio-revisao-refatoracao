#include "Ursidae.hpp"

double const Ursidae :: PEIXES_POR_PORCAO = 5;

Ursidae :: Ursidae (int idade, string nome, string especie, double kgPeixePorDia) : Animal(idade, nome) {
    this->_especie = especie;
    this->_kgPeixePorDia = kgPeixePorDia;
}

void Ursidae :: print() {
    cout << "\n[Animal]" << endl
    << "  Nome: " << this->getNome() << endl
    << "  Idade: " << to_string(this->getIdade()) << endl
    << "  Família: Ursidae" << endl
    << "  Especie: " << this->_especie << endl;
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