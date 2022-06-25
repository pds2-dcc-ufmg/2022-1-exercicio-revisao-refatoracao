#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
using namespace std;

class Cuidador{

	private:
		string nome;
		string telefone;

	public:
		Cuidador(string _nome, string _telefone);
		void print(); 

};

#endif
