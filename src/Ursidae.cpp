#include "Ursidae.hpp"

Ursidae::Ursidae(std::string nome, int idade, std::string especie) : Animal(nome, idade, "Ursidae"){
    this->_especie = especie;
    this->_PeixeConsumido = 0;
}

Ursidae::Ursidae(std::string nome, int idade) : Animal(nome, idade, "Ursidae"){
    this->_PeixeConsumido = 0;
}

void Ursidae::print(){
    
    Animal::print();
    if(!this->_especie.empty()){
        std::cout << "  Espécie: " << this->_especie << std::endl;
    }
    
}

void Ursidae::set_PeixeConsumido(int porcoesConsumidas){
    this->_PeixeConsumido = porcoesConsumidas * this->PEIXES_POR_PORCAO;
}

int Ursidae::get_PeixeConsumido(){
    return this->_PeixeConsumido;
}

