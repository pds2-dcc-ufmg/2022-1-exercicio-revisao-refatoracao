#include "Animal.hpp"

Animal::Animal(std::string _nome, int _idade, std::string _famillia){
    this->nome = nome;
    this->idade = idade;
    this->familia = familia;
}

void Animal::imprimirDadosAnimal(){
    std::cout << std::endl 
    << "[Animal]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  Familia: " << this->familia << std::endl;
}

void Animal::imprimirTchau(){
    std::cout << "Tchau" << std::endl;
}

double Animal::calculaConsumo(int porcao){
    return 0;
}