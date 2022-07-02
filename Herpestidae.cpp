#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, std::string _idade, std::string _especie) : Animal(_nome, _idade , "Herpestidae")
{
    this->nome = _nome;
    this->idade = _idade;
    this->familia = "Herpestidae";
    this->especie = _especie;
};

Herpestidae::~Herpestidae(){};

double Herpestidae::kgConsumidos(int _qntPorcoes)
{
    double consumo = KG_PORCAO * _qntPorcoes;
    
    return consumo;
};

void Herpestidae::print() 
{
    std::cout << std::endl;
    std::cout << "[Animal]" << std::endl;
    std::cout << "  Nome: " << this->nome << std::endl;
    std::cout << "  Idade: " << this->idade << std::endl;
    std::cout << "  Familia: " << this->familia << std::endl;
    std::cout << "  Especie: " << this->especie << std::endl;
};

