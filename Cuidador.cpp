#include "Cuidador.hpp"
#include <iostream>

Cuidador::Cuidador(std::string nome, std::string cpf, std::string telefone, 
			std::string nascimento, std::string salario) : 
				nome(nome), cpf(cpf), telefone(telefone), 
				nascimento(nascimento), salario(salario) {
					this->print();
				}

void Cuidador::print(){
    std::cout << std::endl << std::endl;
	std::cout << "[Cuidador]" << std::endl
    << "  Nome: " << nome << std::endl
	<< "  CPF: " << cpf << std::endl
	<< "  telefone: " << telefone << std::endl
	<< "  Nascimento: " << nascimento << std::endl;

}

