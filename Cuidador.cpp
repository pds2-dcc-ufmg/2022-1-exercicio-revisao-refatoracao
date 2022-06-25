#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){

	std::cout << "[Cuidador]" << endl
         << "  Nome: " << nome << endl
		 << "  CPF: " << cpf << endl
		<< "  Telefone: " << telefone << endl
		 << "  Nascimento: " << birth << endl;

}

