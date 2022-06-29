#include <iostream>
#include <string>

#include "Animal.hpp"

Animal::Animal(int _idade, std::string _familia, std::string _nome) :
    idade(_idade), familia(_familia), nome(_nome) {}

void Animal::print()
{
    std::cout << "\n[Animal]" << std::endl
         << "  Nome: " << nome << std::endl
         << "  Idade: " << idade << std::endl
         << "  Familia: " << familia << std::endl;
}

std::string Animal::get_nome()
{
    return nome;
}