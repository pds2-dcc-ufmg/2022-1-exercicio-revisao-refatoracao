#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>
#include <iomanip>
#include <sstream>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Cuidador{

	private:

    string salario;
	string nome;
	string cpf;
	string telefone;
	string nascimento;

	public: 
     
	Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _nascimento);

	Cuidador();

	~Cuidador();

	void print();

	string getSalario();

	string getNome();

	string getCpf();

	string getTelefone();

	string getNascimento();

};

#endif
