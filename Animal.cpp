#include "Animal.hpp"

Animal::Animal(std::string _nome, std::string _idade, std::string _familia) 
: nome(_nome), idade(_idade), familia(_familia) {}

Animal::Animal(std::string _nome, std::string _idade, std::string _familia, std::string _especie) 
: nome(_nome), idade(_idade), familia(_familia), especie(_especie) {}

Animal::~Animal() {}

std::string Animal::getNome() {
    return this->nome;
}

void Animal::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  Familia: " << this->familia << std::endl;

    if(this->especie != "Não definida")
        std::cout << "  Especie: " << this->especie << std::endl;
}