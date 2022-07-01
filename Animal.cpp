#include "Animal.hpp"

Animal::Animal(std::string nome, std::string familia, int idade) {
    this->_nome = nome;
    this->_idade = idade;
    this->_familia = familia;
    this->_comidaPorPorcao = 0;
}

Animal::~Animal() {
}

void Animal::print() {
    std::cout << std::endl << "[Animal]" << std::endl
    << "  Nome: " << this->_nome << std::endl
    << "  Idade: " << this->_idade << std::endl
    << "  Família: " << this->_familia << std::endl;
}

int Animal::calcularConsumo(int porcoesConsumidas) {
    return this->_comidaPorPorcao*porcoesConsumidas;
}

std::string Animal::getNome(){
    return this->_nome;
}