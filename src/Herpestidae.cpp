#include "Herpestidae.hpp"

Herpestidae::~Herpestidae() {}

Herpestidae::Herpestidae() {}

Herpestidae::Herpestidae(string _nome, int _idade, string _especie) {
    nome = _nome;
    idade = _idade;
    especie = _especie;
    familia = "Herpestidae";
    ALIMENTO = "Ração";
}

void Herpestidae::print() {
    Animal::print();
    cout << "  Especie: " << especie <<endl;
}