#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador() {}

Cuidador::Cuidador(string _nome, unsigned long _cpf, string _telefone, string _dataNascimento, double _salario) {
	nome = _nome;
	telefone = _telefone;
	dataNascimento = _dataNascimento;
	cpf = _cpf;
	salario = _salario;
}

void Cuidador::print(){
	cout << "[Cuidador]" << endl;
    cout << "  Nome: " << nome << endl;
	cout << "  CPF: " << cpf << endl;
	cout << "  Telefone: " << telefone << endl;
	cout << "  Nascimento: " << dataNascimento << endl;
}

string Cuidador::getNome() {return nome;}