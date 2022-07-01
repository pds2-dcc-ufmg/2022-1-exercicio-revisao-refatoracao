#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie) : Animal(_nome, _idade, "Herpestidae"){
    this->especie = _especie;
}

void Herpestidae::imprimirDadosAnimal(){
    Animal::imprimirDadosAnimal();
    std::cout << "  Especie: " << this->especie << std::endl;
}

double Herpestidae::calculaConsumo(int porcoesConsumidas){
    return Herpestidae::QUANTIDADE_PORCAO * (double)porcoesConsumidas;
}