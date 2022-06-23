#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string nome, int idade){
	this->nome = nome;
	this->idade = idade;
	this->especie = "indefinido";
	this->family = "Herpestidae";
}

Herpestidae::Herpestidae(string nome, int idade, string especie){
	this->nome = nome;
	this->idade = idade;
	this->especie = especie;
	this->family = "Herpestidae";
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    double c = kgPorPorcao*porcoesConsumidas;
    return c;
}

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << this->especie <<endl;
}