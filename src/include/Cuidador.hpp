#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{
	private:
    	double salario;
		std::string dataNascimento;
		std::string nome;
		std::string telefone;

	public:
		Cuidador(double salario, std::string dataNascimento, std::string nome, std::string telefone);
		void print();
		std::string getNome();
};

#endif
