#include "Cuidador.hpp"

Cuidador::Cuidador(double _salario, std::string _nome, std::string _cpf, std::string _telefone, std::string _dataNascimento): salario(_salario), nome(_nome), cpf(_cpf), telefone(_telefone), dataNascimento(_dataNascimento){

}

std::string Cuidador::getNome() const {
	return nome;
}


void Cuidador::print()
{
	std::cout << "[Cuidador]" << std::endl
			  << "  Nome: " << nome << std::endl
			  << "  CPF: " << cpf << std::endl
			  << "  Telefone: " << telefone << std::endl
			  << "  Nascimento: " << dataNascimento << std::endl;
}
