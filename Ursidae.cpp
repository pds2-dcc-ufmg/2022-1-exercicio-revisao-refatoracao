#include "Ursidae.hpp"

Ursidae::Ursidae(){}

Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie, double _kgPeixesPorDia) : Animal(_nome, _idade, "Ursidae"){
    this->especie = _especie;
    this->kgPeixesPorDia = _kgPeixesPorDia;
}

void Ursidae::print() {
    Animal::print();
    std::cout << "  Especie: " << this->especie << std::endl;
}


double Ursidae::calcularPeixesConsumidos(int porcoesConsumidas){
    int peixesPorPorcao = 5;
    return peixesPorPorcao * porcoesConsumidas;
}