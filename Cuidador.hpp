#ifndef Cuidador_H
#define Cuidador_H

#include <string>

class Cuidador{

	private:

    	std::string salario;
		std::string nome;
		std::string cpf;
		std::string telefone;
		std::string aniversario;
	
	public:

		void print(); 
		Cuidador() = default;
		Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _aniversario, std::string _salario);
		std::string getNome();
		~Cuidador();
};

#endif
