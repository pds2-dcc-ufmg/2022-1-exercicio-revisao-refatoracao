#include "Cuidador.hpp"

Cuidador::Cuidador(std::string nome, std::string cpf, std::string telefone, std::string dataNascimento, std::string salario){
	this->nome = nome;
	this->cpf = cpf;
	this->telefone = telefone;
	this->dataNascimento = dataNascimento;
	this->salario = salario;
}

std::string Cuidador::getNome(){
	return nome;
}

void Cuidador::print(){

	std::cout <<"[Cuidador]"<< std::endl<<"  Nome: "<<nome<<std::endl<<"  CPF: "<<cpf<< std::endl<<"  Telefone:"<<telefone<<std::endl<<"  Nascimento: "<<dataNascimento<< std::endl;

}

