#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador :: Cuidador(string salario, string nome, string cpf, string telefone, string nascimento) {
	this->_salario = salario;
	this->_nome = nome;
	this->_cpf = cpf;
	this->_telefone = telefone;
	this->_nascimento = nascimento;
}

void Cuidador :: print() {
	cout << "[Cuidador]" << endl << "  Nome: " << this->_nome << endl << "  CPF: " << this->_cpf << endl;
	cout << "  Telefone: " << this->_telefone << endl << "  Nascimento: " << this->_nascimento << endl;
}

string Cuidador :: getNome() {
	return this->_nome;
}

