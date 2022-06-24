#include "Cuidador.hpp"

Cuidador::Cuidador(string nome, long int cpf, double salario, string telefone, string nascimento){
	this->nome = nome;
	this->cpf = cpf;
	this->salario = salario;
	this->telefone = telefone;
	this->nascimento = nascimento;
}

string Cuidador::getNome(){
	return this->nome;
}

void Cuidador::setNome(string nome) {
	this->nome = nome;
}

void Cuidador::print(){
	cout << "[Cuidador]" << endl;
	cout << "  Nome: " << this->nome << endl;
	cout << "  CPF: " << this->cpf << endl;
	cout << "  Telefone: " << this->telefone << endl;
	cout << "  Nascimento: " << this->nascimento << endl;
}