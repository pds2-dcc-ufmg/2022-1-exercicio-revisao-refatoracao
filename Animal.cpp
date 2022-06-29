#include <iostream>
#include <string>
#include "Animal.hpp"

void Animal::setEspecie(std::string _especie)
{
  this->especie = _especie;
}

string Animal::getEspecie()
{
  return this->especie;
}

void Animal::setIdade(int _idade)
{
  this->idade = _idade;
}

int Animal::getIdade()
{
  return this->idade;
}

void Animal::setFamilia(std::string _familia)
{
  this->familia = _familia;
}
std::string Animal::getFamilia()
{
  return this->familia;
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
            << "  Família: " << familia << std::endl
            << "  Espécie: " << especie << std::endl;
}