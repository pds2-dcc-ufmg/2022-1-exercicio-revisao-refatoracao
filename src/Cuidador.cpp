#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _salario, std::string _cpf, std::string _telefone, std::string _dataNascimento) : Ser(_nome), salario(_salario),
cpf(_cpf), telefone(_telefone), dataNascimento(_dataNascimento) {}

void Cuidador::print() const{
	std::cout << "[Cuidador]" << std::endl
    	      << "  Nome: " << nome << std::endl
		      << "  CPF: " << cpf << std::endl
		      << "  Telefone: " << telefone << std::endl
		      << "  Nascimento: " << dataNascimento << std::endl;
}