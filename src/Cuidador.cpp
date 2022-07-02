#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){

	std::cout << "[Cuidador]" << std::endl;
    std::cout << "Nome: " << this -> _nome << std::endl;
	std::cout << "CPF: " << this -> _cpf << std::endl;
	std::cout << "Telefone: " << this -> _telefone << std::endl;
	std::cout << "Nascimento: " << this -> _birth << std::endl;

}

