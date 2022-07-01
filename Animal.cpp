#include <iostream>
#include <string>
#include "Animal.hpp"

virtual void Animal::ImprimirAnimal()
{
  std::cout << "\n[Animal]" << std::endl
            << "Nome: " << nome << std::endl
            << "Idade: " << idade << std::endl
            << "Familia: " << familia << std::endl;
}

void Animal::sair()
{
  std::cout << "Tchau" << std::endl;
}