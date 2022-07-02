#include "Animal.hpp"

Animal::Animal() : Animal(0, ""){}

Animal::Animal(int idade, std::string nome){
    this->idade = idade;
    this->nome = nome;
}

void Animal::print(){

    std::cout << "\n[Animal]" << std::endl;
    std::cout << "Nome: " << this->getNome() << std::endl;
    std::cout << "Idade: " << this->getIdade() << std::endl;
    std::cout << "Familia: " << this->getFamilia() << std::endl;
    std::cout << "Especie: " << this->getEspecie() << std::endl;
     
}

int Animal::getIdade(){
    return this->idade;
}

std::string Animal::getFamilia(){
    return this->familia;
}

std::string Animal::getNome(){
    return this->nome;
}

std::string Animal::getEspecie(){
    return this->especie;
}

void Animal::setEspecie(std::string esp){
    this->especie = esp;
}

void Animal::setFamilia(char InicialFamilia){
    if(InicialFamilia == 'H')
        this->familia = "Herpestidae";
    else   
        this->familia = "Ursidae";
}