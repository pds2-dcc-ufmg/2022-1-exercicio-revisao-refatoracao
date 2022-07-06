#include "Animal.hpp"

Animal::Animal(std::string familia, std::string nome, uint idade) : 
    familia(familia), nome(nome), idade(idade) {
        this->print();
}

void Animal::print() {
    std::cout << std::endl << std::endl;
    std::cout << "[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Familia: " << familia << std::endl;
}

void Animal::print_oi(){
    std::cout << "Tchau" << std::endl;
}
        