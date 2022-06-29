#include "Cuidador.hpp"

Cuidador::Cuidador(){}

Cuidador::Cuidador(string _salario, string _nome, unsigned long int _cpf, string _tel, string _birth){
	this->salario = _salario;
	this->nome = _nome;
	this->cpf = _cpf;
	this->tel = _tel;
	this->birth = _birth;
}

void Cuidador::print(){
	std::cout << "[Cuidador]" << endl
        << "  Nome: " << nome << endl
		<< "  CPF: " << cpf << endl
		<< "  Telefone: " << tel << endl
		<< "  Nascimento: " << birth << endl;
}

std::string Cuidador::getNOME(){
	return this->nome;
}

