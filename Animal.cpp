#include "Animal.hpp"

Animal::Animal(int _idade, string _familia, string _nome){
    this->idade = _idade;
    this->family = _familia;
    this->nome = _nome;
}

void Animal::print(){
    cout << "\n[Animal]" << endl << "  Nome: " << nome << endl << "  Idade: " << idade << endl << "  Familia: " << family << endl;
}