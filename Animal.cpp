#include <iostream>
#include <string>
#include "Animal.hpp"

void Animal::print()
{
  cout << "\n[Animal]" << endl
       << "  Nome: " << nome << endl

       << "  Idade: " << IDADE << endl
       << "  Familia: " << family << endl;
}

void Animal::print_oi()
{
  cout << "Tchau" << endl;
}