#include <iostream>
#include <string>
#include "Alimentacao.hpp"

void Alimentacao::print(){
    std::cout << "Animal: " << nomeAnimal << std::endl;
    std::cout << " Cuidador: " << cuid.nome << std::endl;
}
