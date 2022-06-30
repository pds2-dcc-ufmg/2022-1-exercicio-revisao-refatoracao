#include "Animal.hpp"

Animal::Animal(std::string _nome, int _idade, std::string _familia) :
    nome(_nome), idade(_idade), familia(_familia) {}

void Animal::print() {

    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  Familia: " << this->familia << std::endl;

}

void print_oi() {
            
    std::cout << "Tchau" << std::endl;

} //