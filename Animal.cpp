#include "Animal.hpp"

Animal::Animal(int _idade, std::string _familia, std::string _nome){
    this->idade = _idade;
    this->family = _familia;
    this->nome = _nome;
}

std::string Animal::Get_nome(){
    return nome;
}

void Animal::print(){
    std::cout << "\n[Animal]" << std::endl << "  Nome: " << nome << std::endl << "  Idade: " << idade << std::endl << "  Familia: " << family << std::endl;
}