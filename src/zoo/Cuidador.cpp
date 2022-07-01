#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _aniversario, float _salario)
{
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->aniversario = _aniversario;
	this->salario = _salario;
}

void Cuidador::print()
{
	std::cout << "[Cuidador]" << std::endl
			  << "  Nome: " << nome << std::endl
			  << "  CPF: " << cpf << std::endl
			  << "  Telefone: " << telefone << std::endl
			  << "  Nascimento: " << aniversario << std::endl;
}

std::string Cuidador::getNome()
{
	return this->nome;
}