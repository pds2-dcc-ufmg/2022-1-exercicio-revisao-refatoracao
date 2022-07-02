#include "Animal.hpp"

Animal::Animal(std::string _nome, std::string _idade, std::string _familia)
{
    this->nome = _nome;
    this->idade = _idade;
    this->familia = _familia;

    if(_familia == "Ursidae")
        this->kgPorcao = 5;
    else
        this->kgPorcao = 1;
};

Animal::~Animal(){};

std::string Animal::getNome()
{
    return this->nome;
};

std::string Animal::getFamilia()
{
    return this->familia;
};

double Animal::kgConsumidos(int _qntPorcoes)
{
    double consumo = this->kgPorcao * _qntPorcoes;

    return consumo; 
};

void Animal::print() 
{
    std::cout << std::endl;
    std::cout << "[Animal]" << std::endl;
    std::cout << "  Nome: " << this->nome << std::endl;
    std::cout << "  Idade: " << this->idade << std::endl;
    std::cout << "  Familia: " << this->familia << std::endl;
};


