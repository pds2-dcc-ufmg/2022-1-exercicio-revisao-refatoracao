#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>
#include <iostream>

using std::string;

class Cuidador{

	private:
		string nome;

	public:
		Cuidador(string nome);
		string getNome();

};

#endif
