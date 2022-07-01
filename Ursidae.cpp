#include "Ursidae.hpp"

Ursidae::Ursidae(string _nome, string _idade, string _especie, double _kgPeixePorDia)
    : Animal("Ursidae", _nome ,_idade ) , especie(_especie), kgPeixePorDia(_kgPeixePorDia){} 

void Ursidae::print() {
    cout << "\n[Animal]" << endl
         << "  Nome: " << this->nome << endl
         << "  Idade: " << this->idade << endl
         << "  Família: Ursidae" << endl
         << "  Especie: " << this->especie << endl;
}
double Ursidae::calcula_peixes_consumidos(int porcaoPeixes){
    return peixesPorPorcao*porcaoPeixes;
}
