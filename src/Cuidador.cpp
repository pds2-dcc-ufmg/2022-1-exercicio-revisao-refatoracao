#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(){};

Cuidador::Cuidador(string salario, string nome, string cpf, string telefone, string nascimento){
	this->salario = salario;
	this->nome = nome;
	this->cpf = cpf;
	this->telefone = telefone;
	this->nascimneto = nascimento;
}

string Cuidador::getCpf(){
	return this->cpf;
}

string Cuidador::getNascimento(){
	return this->nascimneto;
}

string Cuidador::getNome(){
	return this->nome;
}

string Cuidador::getSalario(){
	return this->salario;
}

string Cuidador::getTelefone(){
	return this->telefone;
}

void Cuidador::print(){
	cout << 
	"[Cuidador]" << endl
    << "  Nome: " << nome << endl
	<< "  CPF: " << cpf << endl
	<< "  Telefone: " << telefone << endl
	<< "  Nascimento: " << nascimneto << endl;
}
