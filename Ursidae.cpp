#include "Ursidae.hpp"

void Ursidae::print()
{
    std::cout << "\n[Animal]" << std::endl;
    std::cout << "  Nome: " << nome << std::endl;
    std::cout << "  Idade: " << idade << std::endl;
    std::cout << "  Família: Ursidae" << std::endl;
    std::cout << "  Especie: " << especie << std::endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes)
{
    double peixesConsumidos = peixesPorPorcao * porcaoPeixes;
    return peixesConsumidos;
}

void Ursidae::setIdade(int _idade)
{
    idade = _idade;
}

int Ursidae::getIdade()
{
    return idade;
}

void Ursidae::setNome(std::string _nome)
{
    nome = _nome;
}

std::string Ursidae::getNome()
{
    return nome;
}

void Ursidae::setEspecie(std::string _especie)
{
    especie = _especie;
}

std::string Ursidae::getEspecie()
{
    return especie;
}

void Ursidae::setKgPeixePorDia(double _kgPeixePorDia)
{
    kgPeixePorDia = _kgPeixePorDia;
}

double Ursidae::getKgPeixePorDia()
{
    return kgPeixePorDia;
}

