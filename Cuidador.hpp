#ifndef Cuidador_HPP
#define Cuidador_HPP

#include <string>

class Cuidador{

	public:
		std::string nome;
		std::string cpf;
		std::string telefone;
		std::string nascimento;
    	std::string salario;

		Cuidador(std::string nome, std::string cpf, std::string telefone, 
			std::string nascimento, std::string salario);
		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
