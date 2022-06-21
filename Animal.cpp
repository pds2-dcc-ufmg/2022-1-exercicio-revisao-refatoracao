#include "Animal.hpp"

Animal::Animal(){
	this->nome = "vazio";
	this->idade = -1;
	this->family = "vazio";
}

Animal::Animal(string nome, int idade, string family){
	this->nome = nome;
	this->idade = idade;
	this->family = family;
}

void Animal::print() {
    cout << "\n[Animal]" << endl;

    cout << "  Nome: " << this->nome << endl;
    cout << "  Idade: " << this->idade << endl;
    cout << "  Familia: " << this->family << endl;
}