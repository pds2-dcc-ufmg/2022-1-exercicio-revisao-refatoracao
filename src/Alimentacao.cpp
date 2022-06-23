#include "Alimentacao.hpp"

Alimentacao::Alimentacao () {

}
Alimentacao::Alimentacao(int porcao, string comida, string descricao, Cuidador cuidador, string nomeAnimal) {
    this->porcao = porcao;
    this->comida = comida;
    this->descricao = descricao;
    this->cuidador = cuidador;
    this->nomeAnimal = nomeAnimal;
}

void Alimentacao::printAlimentacao() {
    std::cout << "Animal: " << nomeAnimal << "\n" << " Cuidador: " << cuidador.getNomeCuidador() << "\n";
}

void Alimentacao::setComida (string comida) {
    this->comida = comida;
}

void Alimentacao::setPorcao (int porcao) {
    this->porcao = porcao;
}

int Alimentacao::getPorcao () {
    return this->porcao;
}

string Alimentacao::getComida () {
    return this->comida;
}

string Alimentacao::getDescricao () {
    return this->descricao;
}
