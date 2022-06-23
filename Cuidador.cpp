#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print() {

	std::cout << "[Cuidador]" << std::endl;
	std::cout << "  Nome: " << nome << std::endl;
	std::cout << "  CPF: " << cpf << std::endl;
	std::cout << "  Telefone: " << telefone << std::endl;
	std::cout << "  Nascimento: " << nascimento << std::endl;;
}

void Cuidador::setSalario(std::string _salario)
{
	salario = _salario;
}

std::string Cuidador::getSalario()
{
	return salario;
}

void Cuidador::setNome(std::string _nome)
{
	nome = _nome;
}

std::string Cuidador::getNome()
{
	return nome;
}

void Cuidador::setCpf(std::string _cpf)
{
	cpf = _cpf;
}

std::string Cuidador::getCpf()
{
	return cpf;
}

void Cuidador::setTelefone(std::string _telefone)
{
	telefone = _telefone;
}

std::string Cuidador::getTelefone()
{
	return telefone;
}

void Cuidador::setNascimento(std::string _nascimento)
{
	nascimento = _nascimento;
}

std::string Cuidador::getNascimento()
{
	return nascimento;
}
