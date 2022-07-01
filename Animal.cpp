#include "Animal.hpp"

Animal::Animal(std::string _nome, int _idade, std::string _familia, std::string _especie) {
    this->nome = _nome;
    this->idade = _idade;
    this->familia = _familia;
    this->especie = _especie;
}

std::string Animal::getNome() {
    return this->nome;
}

std::string Animal::getFamilia() {
    return this->familia;
}

void Animal::print() {
    std::cout << "\n[Animal]"  << std::endl 
              << "  Nome: "    << this->nome << std::endl 
              << "  Idade: "   << this->idade << std::endl 
              << "  Familia: " << this->familia << std::endl;
    if(this->especie != "") {
        std::cout << "  Especie: " << this->especie << std::endl;
    }
}
