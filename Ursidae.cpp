#include "Ursidae.hpp"

Ursidae::Ursidae(std::string nome, int idade, std::string especie) : _nome(nome), _idade(idade), _especie(especie) {
    this->_familia = "Ursidae";
}

Ursidae::Ursidae() {}

void Ursidae::infoU(){
    std::cout << "[Animal]" << std::endl;
    std::cout << " Familia: " << this->_familia << std::endl;
    std::cout << " Nome: " << this->_nome << std::endl;
    std::cout << " Idade: " << this->_idade << std::endl;
    std::cout << " Especie: " << this->_especie << std::endl;
}

int Ursidae::kgConsumidosPeixe(int porcoesConsumidas){
    int quant = this->peixesPorcao * porcoesConsumidas;
    return quant;
}