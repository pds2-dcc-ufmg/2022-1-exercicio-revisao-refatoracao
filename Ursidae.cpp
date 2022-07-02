#include "Ursidae.hpp"

Ursidae::Ursidae() : Animal()
{
    this->peixesPorPorcao = 5;
}

Ursidae::Ursidae(int _idade, std::string _nome) : Animal(_idade, _nome)
{
    this->peixesPorPorcao = 5;
}

void Ursidae::print()
{
    std::cout << std::endl << "[Animal]" << std::endl << "  Nome: " << this->getNome() << std::endl 
                           << "  idade: " << this->getIdade() << std::endl << "  Família: Ursidae"
                           << std::endl << "  Especie: " << this->getEspecie() << std::endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes)
{
    return this->peixesPorPorcao * porcaoPeixes;
}

int Ursidae::getPeixesPorPorcao()
{
    return this->peixesPorPorcao;
}

double Ursidae::getKgPeixePorDia()
{
    return this->kgPeixePorDia;
}

void Ursidae::setKgPeixePorDia(double _valor)
{
    this->kgPeixePorDia = _valor;
}