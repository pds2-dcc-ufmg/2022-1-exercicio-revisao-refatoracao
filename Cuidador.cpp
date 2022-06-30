#include "Cuidador.hpp"

#include <iostream>
#include <string>

void Cuidador::print(){

	std::cout << "[Cuidador]" 	  << std::endl
              << "  Nome: " 	  << NOME << std::endl
			  << "  CPF: " 		  << cpf << std::endl
			  << "  Telefone: "   << Telefone << std::endl
			  << "  Nascimento: " << BIRTH << std::endl;

}

