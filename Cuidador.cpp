#include "Cuidador.hpp"

Cuidador::Cuidador(string nome, unsigned long cpf, string aniversario, string telefone, string salario){
	this->_nome = nome;
	this->_cpf = cpf;
	this->_aniversario = aniversario;
	this->_telefone = telefone;
	this->_salario = salario;
}

void Cuidador::printCuidador(){
	cout<<"[Cuidador]"<< "\n  Nome: "<<this->_nome<<"\n  CPF: "<<this->_cpf<<"\n  Telefone: "<<this->_telefone<<
	"\n  Nascimento: "<<this->_aniversario<<endl;

}

string Cuidador::getNome(){
	return this->_nome;
}
