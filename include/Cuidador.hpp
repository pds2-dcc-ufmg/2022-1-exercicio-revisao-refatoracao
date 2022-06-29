#ifndef Cuidador_H
#define Cuidador_H
#include <iostream>
#include <string>
using namespace std;

class Cuidador{

	private:
		string salario;
		string nome;
		unsigned long int cpf;
		string tel;
		string birth;
	public:
		Cuidador();
		Cuidador(string, string, unsigned long int, string, string);
		void print(); // imprime na tela os dados de um cliente cadastrado
		std::string getNOME();

};

#endif
