#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print() {

	std::cout << "/n" << "[Cuidador]" << std::endl;
        std::cout << "  Salário: " << salario << std::endl;
	std::cout << "  CPF: " << cpf << std::endl;
        std::cout << "  Telefone: " << telefone << std::endl;
	std::cout << "  Aniversário: " << niversario << std::endl;

}
