#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){

	std::cout << "[Cuidador]" << std::endl
         << "  Nome: " << NOME << std::endl
		 << "  CPF: " << cpf << std::endl
		<< "  Telefone: " << Telefone << std::endl
		 << "  Nascimento: " << BIRTH << std::endl;

}

