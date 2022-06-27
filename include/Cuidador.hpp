#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

using namespace std;

class Cuidador{
	private:
    	string _salario;
		string _nome;
		string _cpf;
		string _telefone;
		string _nascimento;
	
	public:
		Cuidador(string salario, string nome, string cpf, string telefone, string nascimento);
		void print(); // imprime na tela os dados de um cliente cadastrado
		string getNome();
};

#endif
