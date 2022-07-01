#include "Animal.hpp"

Animal::Animal(unsigned int _idade, std::string _familia, std::string _nome)
{
    this->idade = _idade;
    this->familia = _familia;
    this->nome = _nome;
}

void Animal::print()
{
    std::cout << "\n[Animal]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << idade << std::endl
              << "  Familia: " << familia << std::endl;
}