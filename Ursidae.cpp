#include "Ursidae.hpp"

Ursidae::Ursidae(double peixe_por_dia,std::string _especie,Animal animal):Animal(animal){
    this->kgPeixePorDIA = peixe_por_dia;
    this->especie = _especie;
}

void Ursidae::print(){
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Família: Ursidae" << std::endl
    << "  Especie: " << especie << std::endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
    return peixesPorPORCAO*porcaoPeixes;
}