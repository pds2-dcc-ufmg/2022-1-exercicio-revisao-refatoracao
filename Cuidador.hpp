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
		void print(); // imprime na tela os dados de um cliente cadastrado
		
		std::string get_salario(){
			return salario;
		}
		
		std::string get_nome_func(){
			return Nome_funcionario;
		}

		std::string get_cpf(){
			return cpf;
		}

		std::string get_telefone(){
			return Telefone;
		}

		std::string get_Birth(){
			return BIRTH;
		}

};

#endif
