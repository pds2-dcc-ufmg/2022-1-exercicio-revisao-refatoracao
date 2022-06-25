#include "Animal.hpp"

Animal::Animal(){

}

Animal::Animal(string nome, int idade, string family){
	this->nome = nome;
	this->idade = idade;
	this->family = family;
}

string Animal::getNome(){
	return this->nome;
}

void Animal::print() {
    cout << "\n[Animal]" << endl;

    cout << "  Nome: " << this->nome << endl;
    cout << "  Idade: " << this->idade << endl;
    cout << "  Familia: " << this->family << endl;
}