#include "Animal.hpp"

void Animal::print() {
    cout << "\n[Animal]" << endl
    << "  Nome: " << this->nome << endl

        << "  Idade: " << this->IDADE << endl
    << "  Familia: " << this->family << endl;
}

void Animal::print_oi(){
    cout << "Tchau" << endl;
}