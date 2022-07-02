#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>


class Cuidador{

	private:
		std::string _nome;
    	std::string _salario;
		std::string _cpf;
		std::string _telefone;
		std::string _data_de_nascimento;

	public:
		Cuidador();
		Cuidador(std::string _nome, std::string _salario, std::string _cpf, std::string _telefone, std::string _data_de_nascimento);
		std::string get_nome();

};

#endif
