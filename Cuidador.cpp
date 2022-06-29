#include <iostream>
#include <string>

#include "Cuidador.hpp"

Cuidador::Cuidador(
	std::string _salario,
	std::string _nome,
	unsigned long _cpf,
	std::string _telefone,
	std::string _aniversario) : salario(_salario), nome(_nome), cpf(_cpf), telefone(_telefone), aniversario(_aniversario) {}

void Cuidador::print() {

	std::cout << "[Cuidador]" << std::endl
        << "  Nome: " << nome << std::endl
		<< "  CPF: " << cpf << std::endl
		<< "  Telefone: " << telefone << std::endl
		<< "  Nascimento: " << aniversario << std::endl;
}

std::string Cuidador::get_nome() {
	return nome;
}

