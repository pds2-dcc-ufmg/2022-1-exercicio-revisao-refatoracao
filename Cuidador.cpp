#include "Cuidador.hpp"

string Cuidador::getNome(){
	return this->nome;
}

void Cuidador::print(){
	cout << "[Cuidador]" << endl;
	cout << "  Nome: " << this->nome << endl;
	cout << "  CPF: " << this->cpf << endl;
	cout << "  Telefone: " << this->telefone << endl;
	cout << "  Nascimento: " << this->nascimento << endl;
}