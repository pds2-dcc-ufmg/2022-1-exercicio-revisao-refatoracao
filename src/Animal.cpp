#include "Animal.hpp"

Animal::Animal(string _idade, string _family, string _nome) {
  this->nome = _nome;
  this->idade = _idade;
  this->family = _family;
}

string Animal::getNome() {
  return this->nome;
}

void Animal::print() {
  cout << "\n[Animal]" << endl
  << "  Nome: " << this->nome << endl
  << "  Idade: " << this->idade << endl
  << "  Familia: " << this->family << endl;
}

void Animal::printTchau() {
  cout << "Tchau" << endl;
}