#ifndef Cuidador_H
#define Cuidador_H

#include <string>

using std::string;

class Cuidador{

	private:
    	string salario;
		string nome;
		string cpf;
		string telefone;
		string nascimento;
	
	public:
		Cuidador(string _nome, string _cpf, string _telefone, string _nascimento, string _salario);
		void print(); // imprime na tela os dados do cuidador
		
		string getNome();

};

#endif
