#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Cuidador{

	private:
		string NOME;

	public:
		Cuidador(string NOME);
		~Cuidador();
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
