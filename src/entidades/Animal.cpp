#include "Animal.hpp"
#include <iostream>

Animal::Animal::Animal(){
    this->nome = "NULL";
    this->idade = -1;
}

Animal::Animal::Animal(std::string _nome, int _idade){
    this->nome = nome;
    this->idade = idade;
    this->especie = "";
}

void Animal::Animal::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Familia: " << familia << std::endl;
    if(this->especie != ""){
        std::cout << "  Especie: " << especie << std::endl;
    }
}

std::string Animal::Animal::getNome(){
    return this->nome;
}

void Animal::Animal::setEspecie(std::string _especie){

    this->especie = _especie;
}
