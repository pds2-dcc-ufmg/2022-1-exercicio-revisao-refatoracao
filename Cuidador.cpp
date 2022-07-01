#include "Cuidador.hpp"

Cuidador::Cuidador(){
    this->nome = "";
    this->cpf = "";
    this->telefone = "";
    this->data_aniversario = "";
    this->salario = "";
}

Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _dataAniversario, std::string _salario){
    this->nome = _nome;
    this->cpf = _cpf;
    this->telefone = _telefone;
    this->data_aniversario = _dataAniversario;
    this->salario = _salario;
}

void Cuidador::imprime_dados_cuidador(){

    std::cout << "[Cuidador]" << std::endl 
    << "  Nome: " << this->nome << std::endl
    << "  CPF: " << this->cpf << std::endl 
    << "  Telefone: " << this->telefone << std::endl
    << "  Nascimento: " << this->data_aniversario << std::endl;

}

std::string Cuidador::get_nome(){
	return this->nome;
}