#include <iostream>
#include <string>
#include "Cuidador.hpp"

//metodo construtor de classe
Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _aniversario, std::string _salario)
{
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->aniversario = _aniversario;
	this->salario = _salario;
}

//metodo informa sobre cuidador
void Cuidador::print(){
	std::cout << "[Cuidador]" << std::endl
        << "  Nome: " << nome << std::endl
		<< "  CPF: " << cpf << std::endl
		<< "  Telefone: " << telefone << std::endl
		<< "  Nascimento: " << aniversario << std::endl;
}

//metodo retorna nome do cuidador
std::string Cuidador::Get_nome(){
	return nome;
}