#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, std::string _idade, std::string _especie) : Animal(_nome, _idade , "Ursidae")
{
    this->nome = _nome;
    this->idade = _idade;
    this->familia = "Ursidae";
    this->especie = _especie;
};

Ursidae::~Ursidae(){};

double Ursidae::kgConsumidos(int _qntPorcoes)
{
    double consumo = this->KG_PORCAO * _qntPorcoes;

    return consumo;
};

void Ursidae::print() 
{
    std::cout << std::endl;
    std::cout << "[Animal]" << std::endl;
    std::cout << "  Nome: " << this->nome << std::endl;
    std::cout << "  Idade: " << this->idade << std::endl;
    std::cout << "  Família: " << this->familia << std::endl;
    std::cout << "  Especie: " << this->especie << std::endl;
};


