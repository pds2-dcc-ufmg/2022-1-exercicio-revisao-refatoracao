#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){

	std::cout << "[Cuidador]" << endl
         << "  Nome: " << NOME << endl
		 << "  CPF: " << cpf << endl
		<< " #include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _cpf,	std::string _telefone, std::string _nascimento, std::string _salario) : nome(_nome), cpf(_cpf), telefone(_telefone), nascimento(_nascimento), salario(_salario){ }

void Cuidador::imprimirDadosCuidador(){

		std::cout << "[Cuidador]" << std::endl
        << "  Nome: " << nome << std::endl
		<< "  CPF: " << cpf << std::endl
		<< "  Telefone: " << telefone << std::endl
		<< "  Nascimento: " << nascimento << std::endl;

}

std::string Cuidador::getNome(){
	return this->nome;
}

std::string Cuidador::getSalario(){
	return this->salario;
}

std::string Cuidador::getCpf(){
	return this->cpf;
}

std::string Cuidador::getTelefone(){
	return this->telefone;
}

std::string Cuidador::getNascimento(){
	return this->nascimento;
}

void Cuidador::setNome(std::string _nome){
	this->nome = _nome;
}

void Cuidador::setSalario(std::string _salario){
	this->salario = _salario;
}

void Cuidador::setCpf(std::string _cpf){
	this->cpf = _cpf;
}

void Cuidador::setTelefone(std::string _telefone){
	this->telefone = _telefone;
}

void Cuidador::setNascimento(std::string _nascimento){
	this->nascimento = _nascimento;
} Telefone: " << Telefone << endl
		 << "  Nascimento: " << BIRTH << endl;

}

