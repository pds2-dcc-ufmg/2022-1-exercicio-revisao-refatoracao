#include "Animal.hpp"

#include <iostream>

Animal::Animal(const std::string nome, const std::string idade,
               const std::string nomeFamilia) :
    Animal::Animal(nome, idade, nomeFamilia, "") {}

Animal::Animal(const std::string nome, const std::string idade,
               const std::string nomeFamilia, const std::string nomeEspecie) :
    _nome(nome), 
    _idade(idade),
    _nomeFamilia(nomeFamilia),
    _nomeEspecie(nomeEspecie){}

void Animal::print()
{

  std::cout << "\n[Animal]" << std::endl;
  std::cout << "  Nome: " << this->_nome << std::endl;
  std::cout << "  Idade: " << this->_idade << std::endl;
  std::cout << "  Familia: " << this->_nomeFamilia << std::endl;

  if (!this->_nomeEspecie.empty()) //verificar se pode
  {
    std::cout << "  Especie: " << this->_nomeEspecie << std::endl;
  }

  return;

}

