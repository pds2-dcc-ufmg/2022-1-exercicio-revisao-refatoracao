#include "D:\Projetos C\Pds2\Lista 2\Revisao e refatoracao\include\Cuidador.hpp"

Cuidador::Cuidador(string nome, string cpf, string aniversario, string telefone, double salario){
	_nome = nome;
	_cpf = cpf;
	_aniversario = aniversario;
	_telefone = telefone;
	_salario = salario;
}

void Cuidador::printCuidador(){
	std::cout << "[Cuidador]" << std::endl
              << "  Nome: " << _nome << std::endl
		      << "  CPF: " << _cpf << std::endl
              << "  Telefone: " << _telefone << std::endl
              << "  Nascimento: " << _aniversario << std::endl;
}

string Cuidador::getNome(){
	return _nome;
}