#include "Animal.hpp"

void Animal::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl

        << "  Idade: " << IDADE << std::endl
        << "  Familia: " << family << std::endl;
        }

void Animal::print_oi(){
    std::cout << "Tchau" << std::endl;
    }