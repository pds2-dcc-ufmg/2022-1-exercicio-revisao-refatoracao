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
		string data_nascimento;

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
