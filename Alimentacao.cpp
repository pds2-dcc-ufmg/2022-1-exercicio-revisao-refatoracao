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

/*void print() {

    std::cout << "Cuidador: ";
    cout << cuida;

    std::cout << " Animal: ";
    cout << alimentado;
}*/