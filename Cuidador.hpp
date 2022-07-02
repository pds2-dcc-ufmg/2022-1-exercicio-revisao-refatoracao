#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>
#include <iomanip>
#include <string>

class Cuidador
{
	private:
		std::string nome;
		std::string cpf;
		std::string telefone;
		std::string dataNascimento;
		double salario;
	
	public:
		void setNome(std::string _nome);
		void setCPF(std::string _cpf);
		void setTelefone(std::string _telefone);
		void setDataNascimento(std::string _dataNascimento);
		void setSalario(double _salario);
		std::string getNome();
		void print();
};

#endif
