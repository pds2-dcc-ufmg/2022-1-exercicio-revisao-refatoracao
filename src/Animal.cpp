#include "Animal.hpp"

Animal::Animal(std::string nome, int idade, std::string family){
    _nome = nome;
    _idade = idade;
    _family = family;
}


void Animal::print(){
    std::cout << "[Animal]" << std::endl;
    std::cout << "  Nome: " << this -> _nome << std::endl;
    std::cout << "  Idade: " << this -> _idade << std::endl;
    std::cout << "  Familia: " << this -> _family << std::endl;
    
}