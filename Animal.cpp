#include "Animal.hpp"

Animal::Animal(){}

Animal::Animal(int _idade, std::string _nome)
{
    this->idade = _idade;
    this->nome = _nome;
}

int Animal::getIdade()
{
    return this->idade;
}

std::string Animal::getNome()
{
    return this->nome;
}

std::string Animal::getEspecie()
{
    return this->especie;
}

void Animal::setEspecie(std::string _especie)
{
    this->especie = _especie;
}
