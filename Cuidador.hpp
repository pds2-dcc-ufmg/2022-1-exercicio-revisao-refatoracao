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
		string getNome();
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif