#include "Alimentacao.hpp"

Alimentacao::Alimentacao(Animal& a, Cuidador& c, int porcao, std::string comida, std::string desc){
    this->animal = a;
    this->cuidador = c;
    this->porcao = porcao;
    this->descricao = desc;
    this->comida = comida;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

std::string Alimentacao::getComida(){
    return this->comida;
}

std::string Alimentacao::getDescricao(){
    return this->descricao;
}

Animal* Alimentacao::getAnimal(){
    return &(this->animal);
}

Cuidador* Alimentacao::getCuidador(){
    return &(this->cuidador);
}

void Alimentacao::print(){
    std::cout << "Animal alimentado: " << this->getAnimal()->getNome() << std::endl;
    std::cout << "Especie: " << this->getAnimal()->getEspecie() << std::endl;
    std::cout << "Cuidador: " << this->getCuidador()->getNome() << std::endl;

}

void Alimentacao::setComida(std::string comida){
    this->comida = comida;
}

void Alimentacao::setPorcao(int porcao){
    this->porcao = porcao;
}