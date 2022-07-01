#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::ImprimirCuidador()
{
	std::cout << "[Cuidador]" << std::endl
						<< "Nome: " << nome << std::endl
						<< "CPF: " << cpf << std::endl
						<< "Telefone: " << telefone << std::endl
						<< "Nascimento: " << data_nascimento << std::endl;
}
