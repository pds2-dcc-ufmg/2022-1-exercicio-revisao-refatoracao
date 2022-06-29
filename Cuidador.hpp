#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
using namespace std;

class Cuidador{

	private:

    	string salario;
		string nome;
		string cpf;
		string telefone;
		string aniversario;

	public:

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
