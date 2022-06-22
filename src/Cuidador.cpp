#include "Cuidador.hpp"

#include <iostream>
#include <string>

Cuidador::Cuidador() {}

unsigned long int Cuidador::getCpf() {
	return this->cpf;
} 

std::string Cuidador::getNome() {
	return this->nome;
}

void Cuidador::cadastrar(unsigned long _cpf, std::string _salario, std::string _nome, std::string _telefone, std::string _dataAniversario) {
	this->cpf = _cpf;
	this->salario = _salario;
	this->nome = _nome;
	this->telefone = _telefone;
	this->dataAniversario = _dataAniversario;
}