#include "Herpestidae.hpp"

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas)
{
    return quantPorcaoH * porcoesConsumidas;
}

Herpestidae::Herpestidae(unsigned int _idade, std::string _familia, std::string _nome, std::string _especie)
    : Animal(_idade, _familia, _nome)
{
    this->especie = _especie;
}

void Herpestidae::print()
{
    std::cout << "\n[Animal]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << idade << std::endl
              << "  Familia: " << familia << std::endl
              << "  Especie: " << especie << std::endl;
}