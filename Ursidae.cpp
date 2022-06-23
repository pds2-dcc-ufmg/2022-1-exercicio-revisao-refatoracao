#include "Ursidae.hpp"

Ursidae :: Ursidae (int idade, string nome, string especie, double kgPeixePorDia) : Animal(idade, this->_familia, nome) {
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

double Ursidae :: calcula_peixes_consumidos(int porcaoPeixes) {
    return PEIXES_POR_PORCAO*porcaoPeixes;
}