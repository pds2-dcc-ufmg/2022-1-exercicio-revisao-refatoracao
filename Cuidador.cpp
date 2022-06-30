#include "Cuidador.hpp"

#include <iostream>
#include <string>

void Cuidador::print(){

	std::cout << "[Cuidador]" 	  << std::endl
              << "  Nome: " 	  << nome << std::endl
			  << "  CPF: " 		  << cpf << std::endl
			  << "  Telefone: "   << telefone << std::endl
			  << "  Nascimento: " << nascimento << std::endl;

}

