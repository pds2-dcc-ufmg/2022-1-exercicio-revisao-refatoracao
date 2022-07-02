#include "Alimentacao/Alimentacao.hpp"

Alimentacao::Alimentacao(int porcao, std::string comida, std::string descricao, Animal* animal, Cuidador* cuidador){
    this->porcao = porcao;
    this->comida = comida;
    this->descricao = descricao;
    this->animal = animal;
    this->cuidador = cuidador;
}

void Alimentacao::imprimir() {
    std::cout << "Animal: " << this->animal->getNome() << std::endl;
    std::cout << " Cuidador: " << this->cuidador->getNome() << std::endl;
    std::cout << " Descricao: " << this->descricao << std::endl;
}

int Alimentacao::getPorcao() {
    return this->porcao;
}

Animal* Alimentacao::getAnimal() {
    return this->animal;
}
