#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{

	private:
    	std::string nome;
		unsigned long cpf;
		std::string telefone;
		std::string nascimento;
		std::string salario;

	public:

		Cuidador(std::string _nome, unsigned long _cpf, std::string _telefone, std::string _nascimento, std::string _salario);

		std::string getNome();

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
