#include "Cuidador.hpp"

Cuidador::Cuidador(){}

Cuidador::Cuidador(double _salario, std::string _nome, std::string _cpf,
		std::string _telefone, std::string _nascimento){
	salario = _salario;
	nome = _nome;
	cpf = _cpf;
	telefone = _telefone;
}

std::string Cuidador::getnome(){
	return nome;
}

void Cuidador::print(){
	std::cout << "[Cuidador]" << "\n"
            << "  Nome: "        << nome << "\n"
		    << "  CPF: "         << cpf << "\n"
		    << "  Telefone: "    << telefone << "\n"
		    << "  Nascimento: "  << nascimento << "\n";
}



