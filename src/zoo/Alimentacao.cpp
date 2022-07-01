#include "Alimentacao.hpp"

void Alimentacao::print()
{
    std::cout << "Animal: ";
    std::cout << nomeAnimal << std::endl;

    std::cout << " Cuidador: ";
    std::cout << cuidador.getNome() << std::endl;
}