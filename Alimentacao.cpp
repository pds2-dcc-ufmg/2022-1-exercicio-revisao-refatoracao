#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int porcao, string comida, Cuidador cuid, Animal animal){
	this->porcao = porcao;
	this->comida = comida;
	this->descricao = descricao;
	this->cuid = Cuidador(cuid);
	this->animal = Animal(animal);
}

int Alimentacao::getPorcao(){
	return this->porcao;
}

void Alimentacao::setPorcao(int porcao){
	this->porcao = porcao;
}

void Alimentacao::setComida(string comida){
	this->comida = comida;
}

string Alimentacao::getDescricao(){
	return this->descricao;
}

void Alimentacao::setDescricao(string desc){
	this->descricao = desc;
}

void Alimentacao::print() {
    cout << "Animal: ";
    cout << animal.getNome() << "\n";

    cout << " Cuidador: ";
    cout << cuid.getNome() << "\n";
}