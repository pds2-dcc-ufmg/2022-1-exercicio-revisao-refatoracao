#include "AnimalEspecie.hpp"

AnimalEspecie::AnimalEspecie(std::string _nome, std::string _idade, std::string _familia, std::string _especie) : Animal(_nome, _idade, _familia), especie(_especie) {}

void AnimalEspecie::print() const{
    std::cout << std::endl << "[Animal]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << idade << std::endl
              << "  Família: " << familia << std::endl
              << "  Especie: " << especie << std::endl;
}

