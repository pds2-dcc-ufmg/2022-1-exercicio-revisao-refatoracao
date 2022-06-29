#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{

	private:

    	float salario;
		std::string nome;
		unsigned long cpf;
		unsigned long telefone;
		std::string aniversario;

	public:
		Cuidador(float _salario, std::string _nome, unsigned long _cpf, unsigned long _telefone, std::string _aniversario);

		void print(); // imprime na tela os dados de um cliente cadastrado
		std::string get_nome();

};

#endif
