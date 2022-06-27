#include "Animal.hpp"

Animal :: Animal(int idade, string nome) : _idade(idade), _nome(nome) {}

Animal :: Animal(int idade, string familia, string nome) : _idade(idade), _familia(familia), _nome(nome) {}

void Animal :: print() {
    cout << "\n[Animal]" << endl
    << "  Nome: " << this->_nome << endl
    << "  Idade: " << to_string(this->_idade) << endl
    << "  Familia: " << this->_familia << endl;
}

string Animal :: getNome() {
    return this->_nome;
}

int Animal:: getIdade() {
    return this->_idade;
}