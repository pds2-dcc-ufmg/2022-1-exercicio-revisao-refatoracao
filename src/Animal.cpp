#include "Animal.hpp"

Animal::Animal() {}

int Animal::getIdade() {
    return this->idade;
}

void Animal::setInformacoes(int _idade, std::string _familia, std::string _nome, std::string _especie) {
    this->idade = _idade;
    this->familia = _familia;
    this->nome = _nome;
    this->especie = _especie;
}

void Animal::print() {
    std::cout 
        << "\n[Animal]" << std::endl
        << "  Nome: " << nome << std::endl
        << "  Idade: " << idade << std::endl
        << "  Familia: " << familia << std::endl;
}