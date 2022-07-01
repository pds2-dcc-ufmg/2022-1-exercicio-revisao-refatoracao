#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <iostream>

using namespace std;

class Cuidador{

	private:
		string nome;
		string telefone;
		string dataNascimento;
		unsigned long cpf;
		double salario;

	public:
		Cuidador();
		Cuidador(string _nome, unsigned long cpf, string _telefone, string _dataNascimento, double _salario);
		void print();
		string getNome();
};

#endif
