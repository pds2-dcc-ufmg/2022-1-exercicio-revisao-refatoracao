#include <iostream>

#include "Animal.hpp"

void Animal::print()
{
    std::cout << "\n[Animal]" << std::endl
         << "  Nome: " << nome << std::endl
         << "  Idade: " << idade << std::endl
         << "  Familia: " << familia << std::endl;
}

void Animal::print_tchau()
{
    std::cout << "Tchau" << std::endl;
}