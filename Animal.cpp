#include "Animal.hpp"

Animal::Animal(std::string _familia, std::string _nome, int _idade) {
    this->nome = _nome;
    this->familia = _familia;
    this->idade = _idade;
}

void Animal::mostrarInfo() {
    std::cout << "\n[Animal]" << std::endl << "  Nome: " << this->nome << std::endl;
    std::cout << "  Idade: " << this->idade << std::endl << "  Familia: " << this->familia << std::endl;
}
    