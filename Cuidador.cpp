#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){
	cout << "[Cuidador]" << endl
        << "Nome: " << this->nome << endl
		<< "CPF: " << this->cpf << endl
		<< "Telefone: " << this->telefone << endl
		<< "Nascimento: " << this->data_nascimento << endl;
}

void Cuidador::setSalario(string _salario){
	this->salario = _salario;
}
void Cuidador::setNome(string _nome){
	this->nome = _nome;
}
void Cuidador::setCpf(string _cpf){
	this->cpf = _cpf;
}
void Cuidador::setTelefone(string _telefone){
	this->telefone = _telefone;
}
void Cuidador::setData_nascimento(string _data_nascimento){
	this->data_nascimento = _data_nascimento;
}

string Cuidador::getNome(){
	return this->nome;
}

