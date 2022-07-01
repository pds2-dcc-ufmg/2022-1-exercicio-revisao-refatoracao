#include "Animal.hpp"

Animal::Animal(std::string _nome, int _idade, std::string _familia){
    this->nome = _nome;
    this->idade = _idade;
    this->familia = _familia;
}

Animal::Animal(){
    
}

void Animal::print() {
    std::cout << std::endl <<  "[Animal]" << std::endl 
              << "  Nome: " << this->nome << std::endl 
              << "  Idade: " << this->idade << std::endl 
              << "  Familia: " << this->familia << std::endl;
}

std::string Animal::getNome(){
    return this->nome;
}

int Animal::getIdade(){
    return this->idade;
}

std::string Animal::getFamilia(){
    return this->familia;
}
