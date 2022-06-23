#include "Animal.hpp"

void Animal::print()
{
    std::cout << "\n[Animal]" << std::endl;
    std::cout << "  Nome: " << nome << std::endl;

    std::cout << "  Idade: " << idade << std::endl;
    std::cout << "  Familia: " << familia << std::endl;
}

void Animal::printOi()
{
    std::cout << "Tchau" << std::endl;
}

void Animal::setIdade(std::string _idade)
{
    idade = _idade;
}

std::string Animal::getIdade()
{
    return idade;
}

void Animal::setFamilia(std::string _familia)
{
    familia = _familia;
}

std::string Animal::getFamilia()
{
    return familia;
}

void Animal::setNome(std::string _nome)
{
    nome = _nome;
}

std::string Animal::getNome()
{
    return nome;
}
