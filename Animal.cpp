#include <iostream>
#include <string>

#include "Animal.hpp"

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