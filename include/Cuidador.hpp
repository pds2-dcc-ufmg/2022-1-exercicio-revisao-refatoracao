#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Cuidador{
	private:
		string nome;
		long int cpf;
	    double salario;
		string telefone;
		string nascimento;
	
	public:
		Cuidador(string nome, long int cpf, double salario, string telefone, string nascimento);
		string getNome();
		void setNome(string nome);
		void print();
};

#endif