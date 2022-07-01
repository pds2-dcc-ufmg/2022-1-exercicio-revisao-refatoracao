#ifndef Cuidador_H
#define Cuidador_H

#include <iostream>
#include <string>

class Cuidador{
private:
	std::string _salario, _nome, _dataNascimento;
	long long _cpf, _telefone;
public:
	Cuidador(std::string nome, std::string salario, long long cpf, long long telefone, std::string dataNascimento);
	void print();
	std::string getNome();
};

#endif