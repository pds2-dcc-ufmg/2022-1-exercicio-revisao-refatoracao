#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>
#include <string>

class Cuidador {
	private:
		unsigned long int cpf;
		std::string salario;
		std::string nome;
		std::string telefone;
		std::string dataAniversario;

	public:
		Cuidador();
		unsigned long int getCpf();
		std::string getNome();
		void cadastrar(unsigned long _cpf, std::string _salario, std::string _nome, std::string _telefone, std::string _dataAniversario);
};

#endif
