#include "Animal.hpp"

Animal::Animal(std::string _idade, std::string _familia, std::string _nome){
    idade = _idade;
    familia = _familia;
    nome = _nome;
}


void Animal::print(){
    std::cout << "[Animal]" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout<< "Idade: " << idade << std::endl;
    std::cout << "Familia: " << familia << std::endl;
}