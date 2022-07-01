#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie) : Animal(_nome, _idade, "Herpestidae"){
    this->especie = _especie;
}

void Herpestidae::imprimir_dados_animal(){
    Animal::imprimir_dados_animal();
    std::cout << "  Especie: " << this->especie << std::endl;
}

double Herpestidae::calcula_consumo(int porcoesConsumidas){
    return Herpestidae::QUANTIDADE_PORCAO * (double)porcoesConsumidas;
}