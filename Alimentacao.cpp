#include "Alimentacao.hpp"

Alimentacao::Alimentacao(std::shared_ptr<Cuidador> cuid, std::shared_ptr<Animal> animal, std::string comida, int nPorcoes) {
    this->_cuid = cuid;
    this->_animal = animal;
    this->_comida = comida;
    this->_nPorcoes = nPorcoes;
}

void Alimentacao::print() {
    std::cout << "Animal: " << this->_animal->getNome() << std::endl;
    std::cout << " Cuidador: " << this->_cuid->getNome() << std::endl;
}

void Alimentacao::setDesc(std::string desc) {
    this->_desc = desc;
}

std::string Alimentacao::getDesc() {
    return this->_desc;
}

int Alimentacao::calcKgConsumido() {
    return this->_animal->calcularConsumo(this->_nPorcoes);
}