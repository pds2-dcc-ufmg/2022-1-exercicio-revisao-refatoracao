#include "Animal.hpp"

Animal::Animal(){
    this->idade = 0;
    this->familia = "";
    this->especie = "";
    this->nome = "";
    this->hoje = nullptr;
}

void Animal::alimentar(std::string _descricao, int _qtd, Cuidador& _cuid){

}

Animal::~Animal(){

}

std::string Animal::getNomeAnimal(){
    return this->nome;
}

std::string Animal::getFamilia(){
    return this->familia;
}

int Animal::getIdade(){
    return this->idade;
}

Alimentacao* Animal::getAlimentacao(){
    return this->hoje;
}

void Animal::printDados(){

    std::cout << "[Animal]" << std::endl;
    std::cout << " Nome: " << this->nome << std::endl;
    std::cout << " Idade: " << this->idade << std::endl;
    std::cout << " Família: " << this->familia << std::endl;

    if(this->especie!=""){
        std::cout << " Especie: " << this->especie << std::endl;
    }

    std::cout << std::endl;
}

