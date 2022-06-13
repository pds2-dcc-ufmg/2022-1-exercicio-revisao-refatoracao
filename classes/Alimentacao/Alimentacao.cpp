#include <iostream>

#include "./Alimentacao.hpp"

void Alimentacao::print() {
    std::cout << "Animal: ";
    std::cout << nomeAnimal << "\n";

    std::cout << " Cuidador: ";
    std::cout << cuid.getName() << "\n";

    return;
    // TODO: Deletar?
    //std::cout << " : ";
    //cout << ursidae;
}

// TODO: Deletar???
/*void print() {
    std::cout << "Cuidador: ";
    cout << cuida;

    std::cout << " Animal: ";
    cout << alimentado;
}*/
