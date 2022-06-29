#include <iostream>
#include <string>
#include "Animal.hpp"

void Animal::setIdade(int _idade)
{
  this->idade = _idade;
}

int Animal::getIdade()
{
  return this->idade;
}

void Animal::setFamily(std::string _family)
{
  this->family = _family;
}
std::string Animal::getFamily()
{
  return this->family;
}
void Animal::setNome(std::string _nome)
{
  this->nome = _nome;
}
std::string Animal::getNome()
{
  return this->nome;
}

void Animal::print()
{
  std::cout << "[Animal]" << std::endl;
  std::cout << "  Nome: " << nome << std::endl
            << "  Idade: " << idade << std::endl
            << "  Família: " << family << std::endl;
}