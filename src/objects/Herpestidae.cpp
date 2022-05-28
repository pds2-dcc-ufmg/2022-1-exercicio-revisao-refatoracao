#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string nome, int idade, std::string especie) : Animal(nome, idade, PESO_PORCAO_HERPESTIDAE, TIPO_COMIDA_HERPESTIDAE) {
    _familia = FAMILIA_HERPESTIDAE;
    _especie = especie;
}

void Herpestidae::imprimir_info() {
    std::cout << "[Animal]" << std::endl;
    
    std::cout << "  Nome: " << _nome << std::endl;
    std::cout << "  Idade: " << _idade << std::endl;
    std::cout << "  Família: " << _familia << std::endl;
    std::cout << "  Espécie: " << _especie << std::endl << std::endl;
}