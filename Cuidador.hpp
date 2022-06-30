#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{

	private:
    	std::string salario;
		std::string nome;
		std::string cpf;
		std::string telefone;
		std::string nascimento;

	public:
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
