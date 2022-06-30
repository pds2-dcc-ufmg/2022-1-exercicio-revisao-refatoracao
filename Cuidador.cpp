#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){

	std::cout << "Cuidador:" << std::endl;
  std::cout << "  Nome: " << nome << std::endl;
	std::cout	<< "  CPF: " << cpf << std::endl;
	std::cout	<< "  Telefone: " << Telefone << std::endl;
	std::cout << "  Nascimento: " << aniversario << std::endl;
  std::cout << "  Salario: " << salario << std::endl;

}