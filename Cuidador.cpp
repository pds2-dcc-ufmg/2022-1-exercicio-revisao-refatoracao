#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _birth,std::string _salario){
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->birth = _birth;
	this->salario = _salario;
}


void Cuidador::print(){

	std::cout << "[Cuidador]" << std::endl;
	std::cout << "  Nome: " << this->nome << std::endl;
	std::cout << "  CPF: " << this->cpf << std::endl;
	std::cout << "  Telefone: " << this->telefone << std::endl << "  Nascimento: " << this->birth << std::endl;

}

std::string Cuidador::getNomeCuidador(){
	return this->nome;
}

