#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuid, std::string _nomeAnimal) : porcao(_porcao), comida(_comida), descricao(_descricao), cuid(_cuid), nomeAnimal(_nomeAnimal)
{
}

std::string Alimentacao::getDescricao(){
    return descricao;
}

int Alimentacao::getPorcao(){
    return porcao;
}

void Alimentacao::print(){
    std::cout << "Animal: ";
    std::cout << nomeAnimal << std::endl;
    std::cout << " Cuidador: ";
    std::cout << cuid.getNome() << std::endl;;
}