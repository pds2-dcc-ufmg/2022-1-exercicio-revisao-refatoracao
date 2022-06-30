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