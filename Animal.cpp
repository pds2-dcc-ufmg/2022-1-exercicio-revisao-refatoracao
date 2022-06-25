#include "Animal.hpp"

Animal::Animal(int _idade, std::string _nome, std::string _especie): idade(_idade), nome(_nome), especie(_especie)
{}

void Animal::print(){
    std::cout << "[Animal]" << std::endl;
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Idade: " << this->idade << std::endl;
    std::cout << "Especie: " << this->especie << std::endl;
}