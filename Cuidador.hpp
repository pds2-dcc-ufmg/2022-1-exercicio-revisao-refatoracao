#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{
	private:
		string salario;
		string nome;
		string cpf;
		string telefone;
		string aniversario;

	public:
		Cuidador(){}
		Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _aniversario, std::string _salario);
		void print(); 	// imprime na tela os dados de um cliente cadastrado
		std::string Get_nome();

};

#endif