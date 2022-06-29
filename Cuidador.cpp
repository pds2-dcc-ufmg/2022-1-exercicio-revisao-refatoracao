#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print()
{
	std::cout << "[Cuidador]" << endl;
    	std::cout << "  Nome: " << nome << endl;
	std::cout << "  CPF: " << cpf << endl;
	std::cout << "  Telefone: " << telefone << endl;
	std::cout << "  Nascimento: " << nascimento << endl;

}
