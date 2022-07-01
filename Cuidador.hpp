#ifndef Cuidador_H
#define Cuidador_H

#include <string>


class Cuidador{

	private:

   	std::string salario;
	std::string nome;
	std::string cpf;
	std::string telefone;
	std::string nascimento;
       
	public:
	Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _nascimento);
		
	void print(); // imprime na tela os dados de um cliente cadastrado
	string getNome();
		
};

#endif
