#include "Animal.hpp"

Animal::Animal(){}

Animal::Animal(std::string nome, int idade, std::string familia){
    this->_nome = nome;
    this->_idade = idade;
    this->_familia = familia;

}

void Animal::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << this->_nome << std::endl
    << "  Idade: " << this->_idade << std::endl
    << "  Familia: " << this->_familia << std::endl;
}

std::string Animal::get_nome(){
    return this->_nome;
}
