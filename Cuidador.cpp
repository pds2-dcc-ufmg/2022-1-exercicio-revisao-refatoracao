#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::setNome(std::string _nome)
{
	this->NOME = _nome;
}

string Cuidador::getNome()
{
	return this->NOME;
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
	this->Telefone = _phone;
}

string Cuidador::getTelefone()
{
	return this->Telefone;
}

void Cuidador::setBirth(std::string birth)
{
	this->BIRTH = birth;
}

string Cuidador::getBirth()
{
	return this->BIRTH;
}

void Cuidador::print()
{

	std::cout << "[Cuidador]" << endl
						<< "  Salário: " << fixed << setprecision(2) << salario
						<< "  Nome: " << NOME << endl
						<< "  CPF: " << cpf << endl
						<< "  Telefone: " << Telefone << endl
						<< "  Nascimento: " << BIRTH << endl;
}
