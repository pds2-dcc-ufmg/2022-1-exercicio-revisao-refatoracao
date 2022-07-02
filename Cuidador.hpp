#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>

class Cuidador {

	private:
		std::string nome;
		std::string birth;
		std::string telefone;
		double salario;
		long int cpf;
	
	public:

		Cuidador();

		Cuidador(std::string nome, std::string birth, std::string tel, double sal, long int cpf);

		std::string getNome();
		std::string getBirth();
		std::string getTel();
		double getSalario();
		long int getCPF();
		
		void print(); 

};

#endif
