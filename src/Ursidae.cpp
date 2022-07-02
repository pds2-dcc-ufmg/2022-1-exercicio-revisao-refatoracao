#include "Ursidae.hpp"

using namespace std;

Ursidae::Ursidae(int _idade, string _nome, string _especie, double _kgPeixePorDia) : Animal(to_string(_idade), "Ursidae", _nome) {
  this->especie = _especie;
  this->kgPeixePorDia = _kgPeixePorDia;
}

double Ursidae::getPeixesPorPorcao() {
  return this->peixesPorPorcao;
}

void Ursidae::print() {
  cout << "\n[Animal]" << endl
  << "  Nome: " << this->nome << endl
  << "  Idade: " << this->idade << endl
  << "  Família: "<< this->family << endl
  << "  Especie: " << this->especie << endl;
}