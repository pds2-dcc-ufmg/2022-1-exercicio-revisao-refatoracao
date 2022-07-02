#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>
#include <string>
using namespace std;

class Cuidador{

	private:
		string _salario;
		string _nome;
		string _cpf;
		string _telefone;
		string _aniversario;

	public:
		Cuidador(string nome, string cpf, string telefone, string aniversario, double salario);
		string getNome();
		void printCuidador();
};

#endif