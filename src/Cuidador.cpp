#include "Cuidador.hpp"

Cuidador::Cuidador () {} ;

Cuidador::Cuidador (string salario, string nome, string cpf, string telefone, string nascimento) {
	this->salario = salario;
	this->nome = nome;
	this->cpf = cpf;
	this->telefone = telefone;
	this->nascimento = nascimento;
}

string Cuidador::getNomeCuidador () {
	return this->nome;
}	

string Cuidador::getCpfCuidador () {
	return this->cpf;
}

string Cuidador::getNascimentoCuidador () {
	return this->nascimento;
}

string Cuidador::getSalarioCuidador() {
	return this->salario;
}

string Cuidador::getTelefoneCuidador () {
	return this->telefone;
}

void Cuidador::printCuidador (){

	std::cout << "[Cuidador]\n" << "  Nome: " << getNomeCuidador() << "\n  CPF: " << getCpfCuidador() << "\n  Telefone: " << getTelefoneCuidador() <<  "\n  Nascimento: " << getNascimentoCuidador() << std::endl;

}
