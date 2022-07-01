#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{
	private:
		std::string salario;
		std::string nome;
		std::string cpf;
		std::string telefone;
		std::string aniversario;

	public:
		Cuidador(){}
		Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _aniversario, std::string _salario);
		void print(); 	// imprime na tela os dados de um cliente cadastrado
		std::string Get_nome();

};

#endif