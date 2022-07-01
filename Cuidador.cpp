
#include "Cuidador.hpp"

Cuidador::Cuidador(){}

Cuidador::Cuidador(std::string _nome, long int _cpf, std::string _telefone, std::string _aniversario, std::string _salario){
	this->nome = _nome;
	this->cpf = cpf;
	this->telefone = _telefone;
	this->aniversario = _aniversario;
	this->salario = _salario;
}
		

void Cuidador::print(){
	std::cout << "[Cuidador]" << std::endl
         	  << "  Nome: " << this->nome << std::endl
		      << "  CPF: " << this->cpf << std::endl
		      << "  Telefone: " << this->telefone << std::endl
		      << "  Nascimento: " << this->aniversario<<std:: endl;

}

std::string Cuidador::getNome(){
	return this->nome;
}

