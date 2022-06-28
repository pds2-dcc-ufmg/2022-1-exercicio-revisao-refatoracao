#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <iostream>

class Cuidador {
	private:
		std::string nome;

	public:
		Cuidador(std::string _nome);

		~Cuidador();
		
		std::string getNome();
};

#endif