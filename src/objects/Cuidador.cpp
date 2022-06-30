#include "Cuidador.hpp"

Cuidador(string nome){
	this->nome = nome;
}

~Cuidador(){}

void Cuidador::print(){

	cout << "[Cuidador]" << "  Nome: " << this->nome << endl;

}

