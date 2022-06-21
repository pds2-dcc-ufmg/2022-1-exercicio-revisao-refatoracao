#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int porcao, string comida, Cuidador& cuid, string nomeAnimal){
	this->porcao = porcao;
	this->comida = comida;
	this->descricao = descricao;
	this->cuid = cuid;
	this->nomeAnimal = nomeAnimal;
}

string Alimentacao::getDescricao(){
	return this->descricao;
}

void Alimentacao::setDescricao(string desc){
	this->descricao = desc;
}

void Alimentacao::print() {
    std::cout << "Animal: ";
    cout << nomeAnimal << "\n";

    std::cout << " Cuidador: ";
    cout << cuid.getNome() << "\n";
}