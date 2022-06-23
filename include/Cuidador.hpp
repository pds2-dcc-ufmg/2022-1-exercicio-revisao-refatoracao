#ifndef Cuidador_H
#define Cuidador_H

//#include <string>
#include <iostream>

using std::string;

class Cuidador{

	private:
    	string salario;
		string nome;
		string cpf;
		string telefone;
		string nascimento;
	
	public:
		Cuidador(string salario, string nome, string cpf, string telefone, string nascimento);
		Cuidador();
		void printCuidador(); // imprime na tela os dados de um cliente cadastrado
		string getSalarioCuidador();
		string getNomeCuidador();
		string getCpfCuidador();
		string getTelefoneCuidador();
		string getNascimentoCuidador();
};

#endif
