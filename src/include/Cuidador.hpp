#ifndef CUIDADOR_H
#define CUIDADOR_H


#include <iostream>
#include <string>
using namespace std;

class Cuidador{
	private:
	double _salario;
	string _nome;
	double _cpf;
	string _telefone;
	string _nascimento;
	
	public:
	Cuidador();
	Cuidador(string nome, double salario, double cpf, string telefone, string nascimento){
		this->_nome = nome;
		this->_cpf = cpf;
		this->_nascimento = nascimento;
		this->_salario = salario;
		this->_telefone = telefone;
	}
	void print();
	string getnome(){return this->_nome;}

};

#endif
