#include "Ursidae.hpp"

Ursidae::Ursidae(string nome, int idade){
	this->nome = nome;
	this->idade = idade;
	this->family = "Ursidae";
}

Ursidae::Ursidae(string nome, int idade, string especie, double kgPeixePorDia){
	this->nome = nome;
	this->idade = idade;
	this->especie = especie;
	this->kgPeixePorDia = kgPeixePorDia;
	this->family = "Ursidae";
}

void Ursidae::print() {
	Animal::print();
	cout << "  Especie: " << this->especie << endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    return peixesPorPorcao*porcaoPeixes;
}