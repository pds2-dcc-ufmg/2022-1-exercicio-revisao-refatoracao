#include <iostream>

#include "Alimentacao.hpp"

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