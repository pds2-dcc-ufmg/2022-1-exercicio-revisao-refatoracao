#include "Animal.hpp"

Animal::Animal(int _idade, std::string _family, std::string _nome): idade(_idade), family(_family), nome(_nome){

}

void Animal::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Familia: " << family << std::endl;
}