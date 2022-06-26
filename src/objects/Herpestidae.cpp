#include"Herpestidae.hpp"

Herpestidae::Herpestidae(){

}

Herpestidae::Herpestidae(std::string nome, std::string idade, std::string especie){
    this->familia = "Herpestidae";
    this->nome = nome;
    this->idade = idade;
    this->especie = especie;
}

double Herpestidae::racaoConsumida(int porcoesConsumidas){
    return porcoesConsumidas; //número de porções consumidas de ração
}

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " <<especie<<std::endl;
}