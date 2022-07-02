#include "Animal.hpp"

Animal::Animal(std::string _nome, int _idade, std::string _especie, std::string _familia){ 
    this->nome = _nome;
    this->idade = _idade;
    this->especie = _especie;
    this->familia = _familia;
}

void Animal::imprimirDados(){

    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Familia: " << familia <<std::endl;

    if(especie != "")
        std::cout << "  Especie: " << especie <<std::endl;
}

std::string Animal::getNome(){
    return this->nome;
}