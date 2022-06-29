#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::setSalario(std::string _salario)
{
	this->salario = _salario;
}

string Cuidador::getSalario()
{
	return this->salario;
}

void Cuidador::setNome(std::string _nome)
{
	this->nome = _nome;
}

string Cuidador::getNome()
{
	return this->nome;
}

void Cuidador::setCpf(std::string _cpf)
{
	this->cpf = cpf;
}

string Cuidador::getCpf()
{
	return this->cpf;
}

void Cuidador::setTelefone(std::string _phone)
{
	this->telefone = _phone;
}

string Cuidador::getTelefone()
{
	return this->telefone;
}

void Cuidador::setAniversario(std::string _aniversario)
{
	this->aniversario = _aniversario;
}

string Cuidador::getAniversario()
{
	return this->aniversario;
}

void Cuidador::print()
{

	std::cout << "[Cuidador]" << endl
						<< "  Salário: " << fixed << setprecision(2) << salario
						<< "  Nome: " << nome << endl
						<< "  CPF: " << cpf << endl
						<< "  Telefone: " << telefone << endl
						<< "  Nascimento: " << aniversario << endl;
}
