#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{

	private:
    	std::string salario;
		std::string NOME;
		std::string cpf;
		std::string Telefone;
		std::string BIRTH;

	public:
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
