#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador::Cuidador(std::string _nome, long int _cpf, std::string _telefone, std::string _nascimento, std::string _salario){
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->nascimento = _nascimento;
	this->salario = _salario;
}

void Cuidador::Cuidador::print(){
	std::cout << "\n[Cuidador]" << std::endl
    << "  Nome: " << nome << std::endl
	<< "  CPF: " << cpf << std::endl
	<< "  Telefone: " << telefone << std::endl
	<< "  Nascimento: " << nascimento << std::endl;

}

std::string Cuidador::Cuidador::getSalario(){
	return this->salario;
}

std::string Cuidador::Cuidador::getNome(){
	return this->nome;
}

long int Cuidador::Cuidador::getCpf(){
	return this->cpf;
}

std::string Cuidador::Cuidador::getTelefone(){
	return this->telefone;
}

std::string Cuidador::Cuidador::getNascimento(){
	return this->nascimento;
}

void Cuidador::Cuidador::setSalario(std::string _salario){
	this->salario = _salario;
}
void Cuidador::Cuidador::setNome(std::string _nome){
	this->nome = _nome;
}

void Cuidador::Cuidador::setCpf(long int _cpf){
	this->cpf = _cpf;
}

void Cuidador::Cuidador::setTelefone(std::string _telefone){
	this->telefone = _telefone;
}

void Cuidador::Cuidador::setNascimento(std::string _nascimento){
	this->nascimento = _nascimento;
}
