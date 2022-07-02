#include "Cuidador.hpp"

void Cuidador::setNome(std::string _nome)
{
	this->nome = _nome;
};

void Cuidador::setCPF(std::string _cpf)
{
	this->cpf = _cpf;
};

void Cuidador::setTelefone(std::string _telefone)
{
	this->telefone = _telefone;
};

void Cuidador::setDataNascimento(std::string _dataNascimento)
{
	this->dataNascimento = _dataNascimento;
};

void Cuidador::setSalario(double _salario)
{
	this->salario = _salario;
};

std::string Cuidador::getNome()
{
	return this->nome;
};

void Cuidador::print()
{
	std::cout << "[Cuidador]" << std::endl;
	std::cout << "  Nome: " << this->nome << std::endl;
	std::cout << "  CPF: " << this->cpf << std::endl;
	std::cout << "  Telefone: " << this->telefone << std::endl;
	std::cout << "  Nascimento: " << this->dataNascimento << std::endl;
};

