#include "Animal.hpp"

Animal::Animal(std::string _nome, int _idade, std::string _familia) {
    this->idade = _idade;
    this->nome = _nome;
    this->familia = _familia;
    this->kgConsumidos = 0;
}

Animal::Animal()  {this->kgConsumidos = 0;}
Animal::~Animal() {}

void Animal::print() {
    std::cout << "[Animal]" << std::endl;
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Idade: " << this->idade << std::endl;
    std::cout << "Família: " << this->familia << std::endl;
    
}

void Animal::setAtributo(std::string campo, std::string valor) {
    if(campo == "nome") {
        this->nome = valor;
    } else if(campo == "idade") {
        this->idade = std::stoi(valor, nullptr, 10);
    } else if(campo == "familia") {
        this->familia = valor;
    } else if(campo == "kgPorcao") {
        this->kgPorcao = std::stod(valor);
    } else if (campo == "kgConsumidos") {
        this->kgConsumidos = std::stod(valor);
    }
}

double Animal::somaKgConsumidos(float numPorcoes) {
    return this->kgConsumidos += numPorcoes*(this->kgPorcao);
}

std::string Animal::getAtributo(std::string campo) {
    if(campo == "nome") {
        return this->nome;
    } else if(campo == "idade") {
        return std::to_string(this->idade);
    } else if(campo == "familia") {
        return this->familia;
    } else if(campo == "kgPorcao") {
        return std::to_string(this->kgPorcao);
    } else if(campo == "kgConsumidos") {
        return std::to_string(this->kgConsumidos);
    }

    return "";
}
