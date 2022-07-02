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
		string birth;

	public:
		Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _birth);
		string getNome();
		// Imprime na tela os dados de um cliente cadastrado
		void print();

};

#endif
