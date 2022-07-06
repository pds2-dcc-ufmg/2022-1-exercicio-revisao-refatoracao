#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int porcao, std::string comida, std::string descricao, 
    std::string nomeAnimal, Cuidador cuidador) : 
        porcao(porcao), comida(comida), descricao(descricao), 
        nomeAnimal(nomeAnimal), cuidador(cuidador) {
    this->print();
}

void Alimentacao::print() {

    std::cout << std::endl << std::endl;
    std::cout << "Animal: ";
    std::cout << nomeAnimal;
    std::cout << std::endl;

    std::cout << " Cuidador: ";
    std::cout << cuidador.nome;
    std::cout << std::endl;
}

void Alimentacao::setPorcao(uint porcao){
    this->porcao = porcao;
}

void Alimentacao::setComida(std::string comida){
    this->comida = comida;
}

uint Alimentacao::getPorcao() {
    return porcao;
}

std::string Alimentacao::getDescricao(){
    return descricao;
}