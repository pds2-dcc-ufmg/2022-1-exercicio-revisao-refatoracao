#include"Ursidae.hpp"

Ursidae::Ursidae(){

}

Ursidae::Ursidae(std::string nome, std::string idade, std::string especie, double qtdePeixe){
    this->familia = "Ursidae";
    this->nome = nome;
    this->idade = idade;
    this->especie = especie;
    this->qtdePeixe = qtdePeixe;
}

double Ursidae::peixesConsumidos(int porcaoPeixes){
    return 5*porcaoPeixes;
}
void Ursidae::print() {
    Animal::print();
    std::cout<< "  Especie: "<< especie<<std::endl;
}
