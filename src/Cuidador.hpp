#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>

class Cuidador{

	private:
		std::string nome;
		std::string telefone;
		std::string nascimento;
		std::string cpf;
		float salario;

	public:
		Cuidador() = default;
		Cuidador(std::string _nome, std::string _tel, std::string _nasc, std::string _cpf, float _salario);

		// Leitura de dados
		void print();
		std::string getAtributo(std::string campo);

		// Escrita de dados
		void setAtributo(std::string campo, std::string valor);
};

#endif
