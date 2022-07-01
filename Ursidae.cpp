#include "Ursidae.hpp"

//metodo construtor de classe com heranca
Ursidae::Ursidae(double peixe_por_dia,std::string _especie,Animal animal):Animal(animal){
    this->kgPeixePorDIA = peixe_por_dia;
    this->especie = _especie;
}

//metodo informa sobre Ursidae
void Ursidae::print(){
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Família: "<< family << std::endl
    << "  Especie: " << especie << std::endl;
}

//metodo retorna consumo de Ursidae
double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
    return peixesPorPORCAO*porcaoPeixes;
}