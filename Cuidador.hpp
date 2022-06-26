#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>
#include <iostream>

using namespace std;

class Cuidador{

public:
	string salario;
	string nome;
	string cpf;
	string telefone;
	string dataNascimento;

	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
