#include <iostream>
#include "Animal.hpp"


Animal::Animal(std::string _nome, int _idade, std::string _family){
    this->nome = _nome;
    this->idade = _idade;
    this->family = _family;
};

//fazer o outro construtor
Animal::Animal(std::string _nome, int _idade){
    this->nome = _nome;
    this->idade = _idade;
};
 
void Animal::print(){
    std::cout << "[Animal]" << std::endl << "  Nome: " << nome << std::endl 
    << "  Idade: " << idade << std::endl << "  Familia: " << family << std::endl;
}

std::string Animal::getNome(){
    return this->nome;
}

int Animal::getIdade(){
    return this->idade;
}
