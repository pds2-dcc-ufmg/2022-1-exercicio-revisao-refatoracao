#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _aniversario, std::string _salario){
	nome = _nome;
	cpf = _cpf;
	telefone = _telefone;
	aniversario = _aniversario;
	salario = _salario; 
}

void Cuidador::print(){

	std::cout << "[Cuidador]" << std::endl;
    std::cout << "Nome: " << nome<< std::endl;
	std::cout << "CPF: " << cpf << std::endl;
	std::cout << "Telefone: " << telefone << std::endl;
	std::cout << "Nascimento: " << aniversario << std::endl;
}

std::string Cuidador::getNome(){
	return nome;
}

