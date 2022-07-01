#include "Ursidae.hpp"

Ursidae::Ursidae(std::string nome, std::string especie, int idade) : Animal(nome, "Ursidae", idade){
    this->_nome = nome;
    this->_idade = idade;
    this->_especie = especie;
    this->_comidaPorPorcao = 5;
}
void Ursidae::print() {
    std::cout << std::endl << "[Animal]" << std::endl
    << "  Nome: " << this->_nome << std::endl
    << "  Idade: " << this->_idade << std::endl
    << "  Família: " << this->_familia << std::endl
    << "  Especie: " << this->_especie << std::endl;
}

