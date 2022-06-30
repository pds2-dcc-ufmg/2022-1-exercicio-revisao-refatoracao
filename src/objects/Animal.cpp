#include "Animal.hpp"

void Animal::print() {
    cout << "\n[Animal]" << "  Nome: " << this->nome << "  Idade: " << this->idade << "  Familia: " << this->family << endl;
}

void Animal::print_oi(){
    cout << "Tchau" << endl;
}