#ifndef Cuidador_H
#define Cuidador_H

#include <string>
using namespace std;

class Cuidador{

	private:

    	string salario;
		string nome;
		string cpf;
		string telefone;
		string nascimneto;

		void print(); // imprime na tela os dados de um cliente cadastrado

	public:
		Cuidador();
		Cuidador(string salario, string nome, string cpf, string telefone, string nascimento);

		string getSalario();
		string getNome();
		string getCpf();
		string getTelefone();
		string getNascimento();

};

#endif
