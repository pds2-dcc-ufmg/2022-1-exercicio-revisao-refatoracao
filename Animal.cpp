#include "Animal.hpp"

Animal::Animal( std::string nome, int idade, std::string familia) : _nome(nome), _idade(idade), _familia(familia) {}

Animal::Animal() {}

void Animal::infoA(){
    std::cout << "[Animal]" << std::endl;
    std::cout << " Familia: " << this->_familia << std::endl;
    std::cout << " Nome: " << this->_nome << std::endl;
    std::cout << " Idade: " << this->_idade << std::endl;
}

void Animal::setFamilia(std::string familia){
    this->_familia = familia;
}