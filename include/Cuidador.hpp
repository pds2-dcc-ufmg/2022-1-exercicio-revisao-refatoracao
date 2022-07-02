#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador{

	private:
		std::string nome;
		std::string telefone;

	public:
		Cuidador(std::string _nome, std::string _telefone);
		void print(); 
		std::string getNome();

};

#endif
