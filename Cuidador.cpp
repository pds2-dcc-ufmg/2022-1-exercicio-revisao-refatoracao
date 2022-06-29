#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _nascimento){
	salario = _salario;
	nome = _nome;
	cpf = _cpf;
	telefone = _telefone;
	nascimento = _nascimento;
}

Cuidador::Cuidador() {}

Cuidador::~Cuidador() {}

string Cuidador::getSalario(){
	return this->salario;
}

string Cuidador::getNome(){
	return this->nome;
}

string Cuidador::getCpf(){
	return this->cpf;
}

string Cuidador::getNascimento(){
	return this->nascimento;
}

string Cuidador::getTelefone(){
	return this->telefone;
}

void Cuidador::print(){
	cout << "[Cuidador]" << endl;
    cout << "Nome: " << this->getNome() << endl;
	cout << "CPF: " << this->getCpf() << endl;
	cout << "Telefone: " << this->getTelefone() << endl;
	cout << "Nascimento: " << this->getNascimento() << endl;
	cout << "Salário: " << this->getSalario() << endl;
}

string Cuidador::getNome(){
	return this->nome;
}

