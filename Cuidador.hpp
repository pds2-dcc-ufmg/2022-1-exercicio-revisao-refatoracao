#ifndef Cuidador_H
#define Cuidador_H

#include <string>
using namespace std;

class Cuidador{

	public:

    	string salario;
		string nome;
		string cpf;
		string telefone;
		string nascimento;
		void imprimirDados(); 
		Cuidador(string _nome,string _cpf,string _telefone, string _nascimento,string _salario);
};

#endif
