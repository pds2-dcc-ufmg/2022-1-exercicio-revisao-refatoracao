#include "Ursidae.hpp"

Ursidae::Ursidae(string nome, int idade, string especie, double kgPeixePorDia){
	this->nome = nome;
	this->idade = idade;
	this->especie = especie;
	this->kgPeixePorDia = kgPeixePorDia;
	this->family = "Ursidae";
}

void Ursidae::print() {
	cout << "\n[Animal]" << endl;
	cout << "  Nome: " << this->nome << endl;
	cout << "  Idade: " << this->idade << endl;
	cout << "  Família: Ursidae" << endl;
	cout << "  Especie: " << this->especie << endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    return peixesPorPorcao*porcaoPeixes;
}