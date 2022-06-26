#include "Ursidae.hpp"

Ursidae::Ursidae() {}

Ursidae::Ursidae(string _nome, int _idade, string _especie) {
    nome = _nome;
    idade = _idade;
    familia = "Ursidae";
    especie = _especie;
    ALIMENTO = "Peixe";
}

void Ursidae::print() {
    cout << "\n[Animal]" << endl;
    cout << "  Nome: " << nome << endl;
    cout << "  Idade: " << idade << endl;
    cout << "  Família: " << familia << endl;
    cout << "  Especie: " << especie << endl;
}