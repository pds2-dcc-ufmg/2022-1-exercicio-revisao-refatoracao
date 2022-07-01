#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <iostream>

class Cuidador{
	private:
    	double salario;
		std::string nome;
		std::string cpf;
		std::string telefone;
		std::string nascimento;

	public:
		Cuidador();
		Cuidador(double _salario, std::string _nome, std::string _cpf,
		std::string _telefone, std::string _nascimento);
		std::string getnome();
		void print();
};

#endif
