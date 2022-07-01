#include "Animal.hpp"


Animal :: Animal(int idade, string nome, string familia){
  idade = _idade;
  nome = _nome;
  familia = _familia;
  }


void Animal :: print() {
    cout << "\n[Animal]" << endl
    << "  Nome: " << this->_nome << endl
    << "  Idade: " << this->_idade << endl
    << "  Familia: " << this->_familia << endl;
}


