#include"Ursidae.hpp"

Ursidae::Ursidae(string _nome, string _especie, int _idade, double kgdePeixe){
    this->nome = _nome;
    this->IDADE = _idade;
    this->especie = _especie;
    this->kgPeixePorDIA = kgdePeixe;
}

void Ursidae::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << IDADE << std::endl
    << "  Família: Ursidae" << std::endl
    << "  Especie: " << especie << std::endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
    return (double) peixesPorPORCAO*porcaoPeixes;
}