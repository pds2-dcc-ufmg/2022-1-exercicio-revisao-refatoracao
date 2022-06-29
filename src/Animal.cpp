#include"Animal.hpp"

Animal::Animal(){}

Animal::Animal(string _family, int _idade, string _nome){
    this->family = _family;
    this->idade = _idade;
    this->nome = _nome;
}

void Animal::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Familia: " << family << std::endl;
}

void Animal::print_oi(){
    std::cout << "Tchau" << std::endl;
}
