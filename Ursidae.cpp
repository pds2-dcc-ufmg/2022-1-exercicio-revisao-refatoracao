#include "Ursidae.hpp"

Ursidae::Ursidae(std::string nome, uint idade, std::string especie, double quantidadePeixe) : 
    nome(nome), idade(idade), especie(especie), quantidadePeixe(quantidadePeixe)
{
    this->print();
}

void Ursidae::print(){
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Família: Ursidae" << std::endl
    << "  Especie: " << especie << std::endl;
}

double Ursidae::calcularPeixesConsumidos(uint porcaoPeixes){
    return PEIXESPORPORCAO*porcaoPeixes;
}