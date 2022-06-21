#include "Animal.hpp"

Animal::Animal(std::string _nome, std::string _idade, std::string _familia) : Ser(_nome), idade(_idade), familia(_familia){}

int Animal::COMIDAPORPORCAO = 5;

void Animal::print() const{
    std::cout << std::endl << "[Animal]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << idade << std::endl
              << "  Familia: " << familia << std::endl;
}

double Animal::kgComidaConsumida(int porcaoComida) const{
    return COMIDAPORPORCAO * porcaoComida;
}