#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <iostream>


class Cuidador{

private:
	std::string salario;
	std::string nome;
	std::string cpf;
	std::string telefone;
	std::string dataNascimento;

public:
	Cuidador()=default;
	Cuidador(std::string nome, std::string cpf, std::string telefone, std::string dataNascimento, std::string salario);
	std::string getNome();
	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
