#ifndef Cuidador_H
#define Cuidador_H

#include <string>
#include <iostream>
#include <string>

class Cuidador{
	private:
		std::string nome;
		long int cpf;
		std::string telefone;
		std::string aniversario;
		std::string salario;
	public:
		Cuidador();
		Cuidador (std::string _nome, long int _cpf, std::string _telefone, std::string _aniversario, std::string _salario);
		void print();
		std::string getNome();
};

#endif
