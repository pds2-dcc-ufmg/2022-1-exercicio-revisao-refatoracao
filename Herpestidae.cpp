#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string nome, std::string especie, int idade) : Animal(nome, "Herpestidae", idade){
    this->_nome = nome;
    this->_idade = idade;
    this->_especie = especie;
    this->_comidaPorPorcao = 1;
}
void Herpestidae::print() {
    std::cout << std::endl << "[Animal]" << std::endl
    << "  Nome: " << this->_nome << std::endl
    << "  Idade: " << this->_idade << std::endl
    << "  Família: " << this->_familia << std::endl
    << "  Especie: " << this->_especie << std::endl;
}