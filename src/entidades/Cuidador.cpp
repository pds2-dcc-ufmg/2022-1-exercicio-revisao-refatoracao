#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(double salario, std::string dataNascimento, std::string nome, std::string telefone){
	this->salario = salario;
	this->dataNascimento = dataNascimento;
	this->nome = nome;
	this->telefone = telefone;
}


void Cuidador::print(){

	std::cout << "[Cuidador]" << std::endl
         	  << "  Nome: " << this->nome << std::endl
			  << "  Telefone: " << this->telefone << std::endl
		 	  << "  Data de Nascimento: " << this->dataNascimento << std::endl
		      << "  Salário: " << std::to_string(this->salario) << std::endl;

}

std::string Cuidador::getNome(){
	return this->nome;
}