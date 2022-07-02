#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _tel, std::string _nasc, std::string _cpf, float _salario) {
	this->nome = _nome;
	this->telefone = _tel;
	this->nascimento = _nasc;
	this->cpf = _cpf;
	this->salario = _salario;
}

void Cuidador::print(){
	std::cout << "[Cuidador]" << std::endl;
	std::cout << "Nome: " << this->nome << std::endl;
	std::cout << "Telefone: " << this->telefone << std::endl;
	std::cout << "Nascimento: " << this->nascimento << std::endl;
	std::cout << "CPF: " << this->cpf << std::endl;
}

void Cuidador::setAtributo(std::string campo, std::string valor) {
	if(campo == "nome") this->nome = valor;
	if(campo == "telefone") this->telefone = valor;
	if(campo == "nascimento") this->nascimento = valor;
	if(campo == "cpf") this->cpf = valor;
	if(campo == "salario") this->salario = std::stof(valor, nullptr);
}

std::string Cuidador::getAtributo(std::string campo) {
	if(campo == "nome") return this->nome;
	if(campo == "telefone") return this->telefone;
	if(campo == "nascimento") return this->nascimento;
	if(campo == "cpf") return this->cpf;
	if(campo == "salario") return std::to_string(this->salario);
	return "";
}