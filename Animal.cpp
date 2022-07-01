#include "Animal.hpp"

Animal::Animal(std::string _nome, int _idade, std::string _familia){
    this->nome = _nome;
    this->idade = _idade;
    this->familia = _familia;
}

Animal::~Animal(){}

void Animal::imprimir_dados_animal(){
    std::cout << std::endl 
    << "[Animal]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  Familia: " << this->familia << std::endl;
}

double Animal::calcula_consumo(int porcao){
    return 0;
}