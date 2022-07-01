#include "Cuidador.hpp"

Cuidador::Cuidador(){
    this->nome = "";
    this->cpf = "";
    this->telefone = "";
    this->dataAniversario = "";
    this->salario = "";
}

Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _dataAniversario, std::string _salario){
    this->nome = _nome;
    this->cpf = _cpf;
    this->telefone = _telefone;
    this->dataAniversario = _dataAniversario;
    this->salario = _salario;
}

void Cuidador::imprimeDadosCuidador(){

    std::cout << "[Cuidador]" << std::endl 
    << "  Nome: " << this->nome << std::endl
    << "  CPF: " << this->cpf << std::endl 
    << "  Telefone: " << this->telefone << std::endl
    << "  Nascimento: " << this->dataAniversario << std::endl;

}

std::string Cuidador::getNome(){
	return this->nome;
}