#include "Alimentacao.hpp"
#include <iostream>

Alimentacao::Alimentacao(std::string nomeComida, double quantidade, std::string descricao, std::string data, Cuidador &cuid){
    this->nomeComida = nomeComida;
    this->quantidade = quantidade;
    this->descricao = descricao;
    this->data = data;
    this->cuid = &cuid; // ACHO Q TA ERRADO
}

// Alimentacao::~Alimentacao(){
//     delete cuid;
// }

void Alimentacao::print() {

    std::cout << " Nome da Comida: ";
    std::cout << this->nomeComida << std::endl;

    std::cout << " Quantidade: ";
    std::cout << this->quantidade << " Quilogramas" << std::endl;

    std::cout << " Descricao: ";
    std::cout << this->descricao << std::endl;

    std::cout << " Foi alimentado: ";
    std::cout << this->data << std::endl;

    std::cout << " Cuidador: ";
    std::cout << cuid->getNome() << std::endl;

}