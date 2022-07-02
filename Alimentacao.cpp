#include "Alimentacao.hpp"

void Alimentacao::print()
{
    std::cout << "Animal: ";
    cout << nomeAnimal << "\n";
    std::cout << " Cuidador: ";
    cout << cuid.getCampo("nome") << "\n";
}


Alimentacao::Alimentacao(int _porcao, string _comida, string _descricao, Cuidador _cuid, string _nomeAnimal)
{
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuid = _cuid;
    this->nomeAnimal = _nomeAnimal;
}

int Alimentacao::getPorcao()
{
    return this->porcao;
}

void Alimentacao::setPorcao(int _porcao)
{
    this->porcao = _porcao;
}

void Alimentacao::setComida(std::string _comida)
{
    this->comida = _comida;
}

std::string Alimentacao::getDescricao()
{
    return this->descricao;
}