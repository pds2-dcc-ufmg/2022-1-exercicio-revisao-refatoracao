#include <iostream>
#include <string>

#include "Cuidador.hpp"

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

