#ifndef Cuidador_H
#define Cuidador_H

#include <string>
#include <iostream>

class Cuidador{

	private:
		std::string salario;
		std::string Nome_funcionario;
		std::string cpf;
		std::string Telefone;
		std::string BIRTH;
	
	public:
		void print();
		
		std::string get_salario();
		
		std::string get_nome_func();

		std::string get_cpf();

		std::string get_telefone();

		std::string get_Birth();

};

#endif
