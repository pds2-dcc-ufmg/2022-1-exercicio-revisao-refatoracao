#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(){
	
}
Cuidador::Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _nascimento){
	this->salario = _salario;
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->nascimento = _nascimento;
}

void Cuidador::print(){
	cout << "[Cuidador]" << endl << "  Nome: " << this->nome << endl<< "  CPF: " << this->cpf << endl<< "  Telefone: " << this->telefone << endl<< "  Nascimento: " << this->nascimento << endl;
}

string Cuidador::getNomeCuidador(){
	return this->nome;
}
