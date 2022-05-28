#include "Ursidae.hpp"

Ursidae::Ursidae(std::string nome, int idade, std::string especie) : Animal(nome, idade, PESO_PORCAO_URSIDAE, TIPO_COMIDA_URSIDAE) {
    _familia = FAMILIA_URSIDAE;
    _especie = especie;
}

void Ursidae::imprimir_info() {
    std::cout << "[Animal]" << std::endl;
    
    std::cout << "  Nome: " << _nome << std::endl;
    std::cout << "  Idade: " << _idade << std::endl;
    std::cout << "  Família: " << _familia << std::endl;
    std::cout << "  Espécie: " << _especie << std::endl << std::endl;
}