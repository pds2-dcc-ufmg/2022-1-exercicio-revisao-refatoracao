#include <iostream>
#include <string>
#include "Cuidador.hpp"

using namespace std;

Cuidador::Cuidador(string _nome, long int _cpf, string _telefone, string _nascimento, string _salario){
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->nascimento = _nascimento;
	this->salario = _salario;
}

void Cuidador::print(){
	cout << "\n[Cuidador]" << endl
    << "  Nome: " << nome << endl
	<< "  CPF: " << cpf << endl
	<< "  Telefone: " << telefone << endl
	<< "  Nascimento: " << nascimento << endl;

}

string Cuidador::getSalario(){
	return this->salario;
}

string Cuidador::getNome(){
	return this->nome;
}

long int Cuidador::getCpf(){
	return this->cpf;
}

string Cuidador::getTelefone(){
	return this->telefone;
}

string Cuidador::getNascimento(){
	return this->nascimento;
}

void Cuidador::setSalario(string _salario){
	this->salario = _salario;
}
void Cuidador::setNome(string _nome){
	this->nome = _nome;
}

void Cuidador::setCpf(long int _cpf){
	this->cpf = _cpf;
}

void Cuidador::setTelefone(string _telefone){
	this->telefone = _telefone;
}

void Cuidador::setNascimento(string _nascimento){
	this->nascimento = _nascimento;
}
