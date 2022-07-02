#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(string _nome,string _cpf,string _telefone, string _nascimento,string _salario){
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->nascimento = _nascimento;
	this->salario = _salario;
}

void Cuidador::imprimirDados(){

	cout << "[Cuidador]" << endl<< "  Nome: " << this->nome << endl<< "  CPF: " << this->cpf << endl << "  Telefone: " << this->telefone << endl << "  Nascimento: " << this->nascimento << endl;

}

