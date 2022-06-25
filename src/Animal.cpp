#include "Animal.hpp"

Animal::Animal(){}

Animal::Animal (string idade, string familia, string nome) {
    this->idade = idade;
    this->familia = familia;
    this->nome = nome;
}

string Animal::getIdade(){
    return this->idade;
}

string Animal::getFamilia(){
    return this->familia;
}

string Animal::getNome(){
    return this->nome;
}

void Animal::print(){
    cout 
    << endl
    << "[Animal]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << idade << endl
    << "  Familia: " << familia << endl;
}

void Animal::print_oi(){
    cout << "Tchau" << endl;
}