#include <iostream>

#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuidador, Animal _animal) :
    porcao(_porcao), comida(_comida), descricao(_descricao), cuidador(_cuidador), animal(_animal) {}


void Alimentacao::print()
{
    std::cout << "Animal: ";
    std::cout << animal.get_nome() << "\n";

    std::cout << " Cuidador: ";
    std::cout << cuidador.get_nome() << "\n";

    // std::cout << " : ";
    // cout << ursidae;
}

std::string Alimentacao::get_descricao()
{
    return descricao;
}

void Alimentacao::set_porcao(int k)
{
    porcao = k;
}

int Alimentacao::get_porcao()
{
    return porcao;
}

void Alimentacao::set_comida(std::string k)
{
    comida = k;
}

/*void print() {

    std::cout << "Cuidador: ";
    cout << cuida;

    std::cout << " Animal: ";
    cout << alimentado;
}*/