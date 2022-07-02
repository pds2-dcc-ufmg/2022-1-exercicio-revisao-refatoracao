#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>


class Cuidador{

	
	private:
    std::string salario;
	std::string nome;
	std::string cpf;
	std::string telefone;
	std::string dataDeNascimento;

	public:
	Cuidador();
	Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _salario, std::string _dataDeNascimento);
	void print();
	std::string getCampo(std::string key);
	void setCampo(std::string key, std::string valor);

};

#endif
