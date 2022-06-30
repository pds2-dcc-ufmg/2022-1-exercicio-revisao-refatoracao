#include "Ursidae.hpp"

const int PEIXE_POR_PORCAO = 5;

Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie, double _consumo_diario) :
    Animal(_nome, _idade, "Ursidae"), especie(_especie), consumo_diario(_consumo_diario) {}

void Ursidae::print() {
            
    Animal::print();

    std::cout << "  Especie: " << this->especie << std::endl;

}

double Ursidae::getConsumoDePeixe(int porcao) {
            
    return porcao * PEIXE_POR_PORCAO;

}