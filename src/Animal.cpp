#include "Animal.hpp"

Animal::Animal () {

}

Animal::Animal (string idade, string familia, string nome) {
    this->idade = idade;
    this->familia = familia;
    this->nome = nome;
}

string Animal::getNomeAnimal() {
    return this->nome;
}

string Animal::getFamiliaAnimal() {
    return this->familia;
}

string Animal::getIdadeAnimal() {
    return this->idade;
}

void Animal::printAnimal() {
    std::cout << "\n[Animal]" << "\n  Nome: " << getNomeAnimal() << "\n  Idade: " << getIdadeAnimal() << "\n  Familia: " << getFamiliaAnimal() << std::endl;
}

double Animal::porcaoComida(string familia) {
    double porcao;
    if (familia == "Peixes" ) {
        porcao = peixesPorPorcao;
    } else {
        porcao = quantidadePorcao;
    }
    return porcao;
}