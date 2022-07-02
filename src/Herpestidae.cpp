#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string _especie, string _idade, string _nome) : Animal(_idade, "Herpestidae", _nome) {
  this->especie = _especie;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    return this->quantPorcao * porcoesConsumidas;
}

int Herpestidae::getQuantPorcao() {
  return this->quantPorcao;
}

void Herpestidae::print() {
  this->print();
  cout << "Especie: " << especie << endl;
}