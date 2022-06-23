#include "Alimentacao.hpp"
#include <iostream>
void Alimentacao::print()
{
    std::cout << "Animal: ";
    std::cout << nomeAnimal << "\n";

    std::cout << " Cuidador: ";
    std::cout << cuid.getNome() << "\n";
}

void Alimentacao::setPorcao(int _porcao)
{
    porcao = _porcao;
}

int Alimentacao::getPorcao()
{
    return porcao;
}

void Alimentacao::setComida(std::string _comida)
{
    comida = _comida;
}

std::string Alimentacao::getComida()
{
    return comida;
}

void Alimentacao::setDescricao(std::string _descricao)
{
    descricao = _descricao;
}

std::string Alimentacao::getDescricao()
{
    return descricao;
}

void Alimentacao::setCuidador(Cuidador _cuid)
{
    cuid = _cuid;
}

Cuidador Alimentacao::getCuidador()
{
    return cuid;
}

void Alimentacao::setNomeAnimal(std::string _nomeAnimal)
{
    nomeAnimal = _nomeAnimal;
}

std::string Alimentacao::getNomeAnimal()
{
    return nomeAnimal;
}
