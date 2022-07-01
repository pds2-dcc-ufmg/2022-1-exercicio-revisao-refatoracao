#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{

	private:
		std::string salario;
		std::string nome;
		unsigned long cpf;
		std::string telefone;
		std::string aniversario;

	public:
		Cuidador(std::string _salario, std::string _nome, unsigned long _cpf, std::string _telefone, std::string _aniversario);

		void print(); // imprime na tela os dados de um cliente cadastrado
		std::string get_nome();

};

#endif
