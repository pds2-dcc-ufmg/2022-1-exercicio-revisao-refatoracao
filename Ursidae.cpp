#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie, double _kgPeixePorDia) : Animal(_nome, _idade, "Ursidae"){
    this->especie = _especie;
    this->kg_peixe_por_dia = _kgPeixePorDia;
}

void Ursidae::imprimir_dados_animal(){
    Animal::imprimir_dados_animal();
    std::cout << "  Especie: " << this->especie << std::endl;
}

double Ursidae::calcula_consumo(int porcaoPeixes){
    return Ursidae::PEIXES_POR_PORCAO * (double)porcaoPeixes;
}