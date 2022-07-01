#include <iostream>
#include "Cuidador.hpp"

Cuidador::Cuidador(std::string nome, std::string salario, long long cpf, long long telefone, std::string dataNascimento) {
	this->_salario = salario;
	this->_nome = nome;
	this->_cpf = cpf;
	this->_telefone = telefone;
	this->_dataNascimento = dataNascimento;
}

void Cuidador::print(){
	std::cout << "[Cuidador]" << std::endl
	<< "  Nome: " << this->_nome << std::endl
	<< "  CPF: " << this->_cpf << std::endl
	<< "  Telefone: " << this->_telefone << std::endl
	<< "  Nascimento: " << this->_dataNascimento << std::endl;
}

std::string Cuidador::getNome() {
	return this->_nome;
}