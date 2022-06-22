#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <iostream>
#include "Ser.hpp"

class Cuidador : public Ser{
	private:
    	std::string salario, cpf, telefone, dataNascimento;

	public:
		Cuidador(std::string _nome, std::string _salario, std::string _cpf, std::string _telefone, std::string _dataNascimento);
		// imprime na tela os dados de um cliente cadastrado
		void print() const override;
};

#endif