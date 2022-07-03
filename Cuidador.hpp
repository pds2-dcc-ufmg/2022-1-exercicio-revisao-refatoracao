#ifndef Cuidador_H
#define Cuidador_H

#include <iostream>
#include <string>
#include <ctime>

class Cuidador
{

	double salario;
	std::string nome;
	std::string cpf;
	std::string telefone;
	std::string dataNascimento;
public:

	std::string getNome() const;

	Cuidador(double _salario, std::string _nome, std::string _cpf, std::string _telefone, std::string _dataNascimento);

	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif