#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string nome, int idade, std::string especie) : Animal(nome, idade, "Herpestidae"){
    this->_especie = especie;
    this->_KgRacaoConsumido = 0;
}

Herpestidae::Herpestidae(std::string nome, int idade) : Animal(nome, idade, "Herpestidae"){
    this->_KgRacaoConsumido = 0;
}

void Herpestidae::print(){
    Animal::print();
    if(!this->_especie.empty()){
        std::cout << "  Espécie: " << this->_especie << std::endl;
    }
    
}

void Herpestidae::set_KgRacaoConsumido(int porcoesConsumidas){
    this->_KgRacaoConsumido = porcoesConsumidas * this->RACAO_POR_PORCAO;
}

int Herpestidae::get_KgRacaoConsumido(){
    return this->_KgRacaoConsumido;
}