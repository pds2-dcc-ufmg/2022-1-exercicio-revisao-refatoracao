#include "Alimentacao.hpp"
#include <iostream>
using namespace std;

void Alimentacao::print() {
        cout << "Animal: ";
        cout << nomeAnimal << "\n";

        cout << " Cuidador: ";
        cout << cuid.getNome() << "\n";
}
