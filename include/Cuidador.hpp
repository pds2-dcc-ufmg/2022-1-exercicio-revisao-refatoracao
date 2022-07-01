#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <iostream>
#include <string>

class Cuidador
{
private:
	float salario;
	std::string nome;
	std::string cpf;
	std::string telefone;
	std::string aniversario;

public:
	Cuidador() {}
	Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _aniversario, float _salario);
	void print();
	std::string getNome();
};

#endif
