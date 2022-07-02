#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _birth) {
	this->salario = _salario;
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _cpf;
	this->birth = _birth;
}

string Cuidador::getNome() {
	return this->nome;
}

void Cuidador::print(){
	cout << "[Cuidador]" << endl
	<< "  Nome: " << this->nome << endl
	<< "  CPF: " << this->cpf << endl
	<< "  Telefone: " << this->telefone << endl
	<< "  Nascimento: " << this->birth << endl;
}

