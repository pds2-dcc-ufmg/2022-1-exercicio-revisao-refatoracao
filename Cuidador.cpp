#include "Cuidador.hpp"

#include <iostream>
#include <string>

Cuidador::Cuidador(std::string _nome, unsigned long _cpf, std::string _telefone, std::string _nascimento, std::string _salario) {
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->nascimento = _nascimento;
	this->salario = _salario;
}

std::string Cuidador::getNome() {
	return this->nome;
}

void Cuidador::print(){

	std::cout << "[Cuidador]" 	  << std::endl
              << "  Nome: " 	  << nome << std::endl
			  << "  CPF: " 		  << cpf << std::endl
			  << "  Telefone: "   << telefone << std::endl
			  << "  Nascimento: " << nascimento << std::endl;

}

