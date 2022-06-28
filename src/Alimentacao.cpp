#include "Alimentacao.hpp"

void Alimentacao::print() {
    std::cout << "[Alimentacao]" << std::endl;
    std::cout << "Animal: " << animal->getAtributo("nome") << std::endl;
    std::cout << "Cuidador: " << cuidador->getAtributo("nome") << std::endl;
}

Alimentacao::Alimentacao(std::string _comida, int _porcao, std::string _descricao, Cuidador& c, Animal& a) {
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuidador = &c;
    this->animal = &a;
}

void Alimentacao::setAnimal(Animal* a) {
    this->animal = a;
}

void Alimentacao::setCuidador(Cuidador* c) {
    this->cuidador = c;
}

std::string Alimentacao::getAtributo(std::string campo) {
    if(campo == "porcao") return std::to_string(this->porcao);
    if(campo == "comida") return this->comida;
    if(campo == "descricao") return this->descricao;

    return "";
}

void Alimentacao::setAtributo(std::string campo, std::string valor) {
    if(campo == "porcao") this->porcao = std::stoi(valor);
    if(campo == "comida") this->comida = valor;
    if(campo == "descricao") this->descricao = valor;
}

Animal* Alimentacao::getAnimal() {return this->animal;}
Cuidador* Alimentacao::getCuidador() {return this->cuidador;}