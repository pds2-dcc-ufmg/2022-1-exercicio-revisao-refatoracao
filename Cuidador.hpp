#ifndef Cuidador_H
#define Cuidador_H

#include<iostream>

using namespace std;

class Cuidador{

	private:
		string _nome;
		unsigned long _cpf;
		string _aniversario;
		string _telefone;
    	string _salario;
		
	public:
		Cuidador(string nome, unsigned long cpf, string aniversario, string telefone, string salario);

		string getNome();
		
		void printCuidador();

};

#endif
