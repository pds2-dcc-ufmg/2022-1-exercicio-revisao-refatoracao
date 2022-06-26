#include "Animal.hpp"
#include <iostream>


void Animal::print() {
    cout << "\n[Animal]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << idade << endl
    << "  Familia: " << familia << endl;
}

int Animal::getIdade(){
    return this->idade;
}

string Animal::getFamilia(){
    return this->familia;
}

string Animal::getNome(){
    return this->nome;
}

void Animal::setIdade(int _idade){
    this->idade = _idade;
}

void Animal::setFamilia(string _familia){
    this->familia = _familia;
}

void Animal::setNome(string _nome){
    this->nome = _nome;
}

void Animal::setEspecie(string _especie){
    this->especie = _especie;
}

string Animal::getEspecie(){
    return this->especie;
}