#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie, double _kgPeixePorDia) : Animal(_nome, _idade, "Ursidae"){
    this->especie = especie;
    this->kgPeixePorDia = _kgPeixePorDia;
}

void Ursidae::imprimirDadosAnimal(){
    Animal::imprimirDadosAnimal();
    std::cout << "  Especie: " << especie << std::endl;
}

double Ursidae::calculaConsumo(int porcaoPeixes){
    return Ursidae::PEIXES_POR_PORCAO * (double)porcaoPeixes;
}