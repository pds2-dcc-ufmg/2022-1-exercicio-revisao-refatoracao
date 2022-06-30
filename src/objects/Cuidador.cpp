#include "Cuidador.hpp"

Cuidador(string NOME){
	this->NOME = NOME;
}

~Cuidador(){}

void Cuidador::print(){

	cout << "[Cuidador]" << endl
         << "  Nome: " << this->NOME << endl;

}

