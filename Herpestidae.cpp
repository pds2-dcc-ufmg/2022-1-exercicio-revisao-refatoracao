#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string nome, int idade, std::string especie) : _nome(nome), _idade(idade), _especie(especie){
    this->_familia = "Herpestidae";
}

Herpestidae::Herpestidae() {}

void Herpestidae::infoH(){
     std::cout << "[Animal]" << std::endl;
    std::cout << " Familia: " << this->_familia << std::endl;
    std::cout << " Nome: " << this->_nome << std::endl;
    std::cout << " Idade: " << this->_idade << std::endl;
    std::cout << " Especie: " << this->_especie << std::endl;
}

int Herpestidae::kgConsumidosRacao(int porcoesConsumidas){
    int quant = kgPorcaoRacao * porcoesConsumidas;
    return quant;
}