#include "../include/Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, unsigned long _cpf, std::string _nascimento, std::string _telefone, double _salario) :
	nome(_nome), cpf(_cpf), nascimento(_nascimento), telefone(_telefone), salario(_salario) {}

void Cuidador::printCuidador() {

	std::cout << "[Cuidador]" << std::endl
	<< "  Nome: " << this->nome << std::endl
	<< "  CPF: " << this->cpf << std::endl
	<< "  Telefone: " << this->telefone << std::endl
	<< "  Nascimento: " << this->nascimento << std::endl;

}

std::string Cuidador::getNome() {

	return this->nome;

}

