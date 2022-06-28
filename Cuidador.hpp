#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>

using namespace std;

class Cuidador{
	private:
    	string salario;
	string nome;
	string cpf;
	string telefone;
	string nascimento;

	public:
	Cuidador();
	Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _nascimento);
	void print();
	string getNomeCuidador();
};
#endif
