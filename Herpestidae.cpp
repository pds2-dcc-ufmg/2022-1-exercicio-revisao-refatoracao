#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _especie,Animal animal):Animal(animal){
    this->especie = _especie;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    return quantPORCAO*porcoesConsumidas;
}

void Herpestidae::print(){
    std::cout << "\n[Animal]" << std::endl << "  Nome: " << nome << std::endl << "  Idade: " << idade << std::endl << "  Familia: " << family << std::endl << "  Especie: " << especie <<std::endl;
}