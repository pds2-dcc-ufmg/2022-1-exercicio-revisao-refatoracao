#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador :: Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _nascimento) {
	this->salario = _salario;
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->nascimento = _nascimento;
}

void Cuidador::print(){
std::cout << "[Cuidador]" << std::endl
         << "  Nome: " << this->nome << std::endl
         << "  CPF: " << this->cpf << std::endl
	 << "  Telefone: " << this->telefone << std::endl
	 << "  Nascimento: " <<this-> nascimento << std::endl;

}

Cuidador :: string  getNome() {
	return this->nome;
}
