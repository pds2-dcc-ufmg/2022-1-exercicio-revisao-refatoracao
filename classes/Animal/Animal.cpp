#include <iostream>

#include "./Animal.hpp"

void Animal::print() {
    std::cout << "\n[Animal]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << IDADE << endl
              << "  Familia: " << family << endl;
    return;
}

void Animal::print_oi(){
    std::cout << "Tchau" << endl;
    return;
}