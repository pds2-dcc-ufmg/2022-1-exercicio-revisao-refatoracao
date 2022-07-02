#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(){}

Cuidador::Cuidador(std::string nome, std::string salario, std::string cpf, std::string telefone, std::string data_de_nascimento){

	this->_nome = nome;
    this->_salario = salario;
	this->_cpf = cpf;
	this->_telefone = telefone;
	this->_data_de_nascimento = data_de_nascimento;
}

std::string Cuidador::get_nome(){
    return this->_nome;
}
