#include "Animal.hpp"

void Animal::print() {
    cout << "\n[Animal]" << endl;
    cout << "  Nome: " << nome << endl;
    cout << "  Idade: " << IDADE << endl;
    cout << "  Familia: " << family << endl;
}

void Animal::print_oi(){
    cout << "Tchau" << endl;
}