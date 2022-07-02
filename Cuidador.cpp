#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _salario, std::string _dataDeNascimento)
{
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->salario = _salario;
	this->dataDeNascimento = _dataDeNascimento;
}	


void Cuidador::print(){

	std::cout << "[Cuidador]" << std::endl
        << "  Nome: " << this->nome << std::endl
		<< "  CPF: " << this->cpf << std::endl
		<< "  Telefone: " << this->telefone << std::endl
		<< "  Nascimento: " << this->dataDeNascimento << std::endl;
}

std::string Cuidador::getCampo(std::string key)
{
	if(key == "salario")
	return this->salario;
	else if(key == "nome")
	return this->nome;
	else if(key == "cpf")
	return this->cpf;
	else if(key == "telefone")
	return this->telefone;
	else if(key == "dataDeNascimento")
	return this->dataDeNascimento;
	else
	return "error";
}

void Cuidador::setCampo(std::string key, std::string valor)
{
	if(key == "salario")
	this->salario = valor;
	else if(key == "nome")
	this->nome = valor;
	else if(key == "cpf")
	this->cpf = valor;
	else if(key == "telefone")
	this->telefone = valor;
	else if(key == "dataDeNascimento")
	this->dataDeNascimento = valor;
	else
	return;
}