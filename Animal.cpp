#include "Animal.hpp"

#include <iostream>
#include <iomanip>
#include <string>

Animal::Animal(string _idade, string _nome, string _familia){
    this->nome = _nome;
    this->familia=_familia;
    this->idade = _idade;
}

void Animal::print(){
    cout << endl<< "[Animal]" << endl << "  Nome: " << this->nome << endl;
    cout << "  Idade: " << this->idade << endl; 
    cout << "  Familia: " << this->familia << endl;
}
