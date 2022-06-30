#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <iostream>

class Cuidador {

	private:

		std::string nome;

		unsigned long cpf;

		std::string nascimento;

		std::string telefone;

		double salario;

	public:

		Cuidador(std::string _nome, unsigned long _cpf, std::string _nascimento, std::string _telefone, double _salario);

		void printCuidador();

		std::string getNome();

};

#endif
