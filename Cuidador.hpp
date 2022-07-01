#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <iostream>

class Cuidador{
	private:
        std::string _nome;
    
    public:
		Cuidador();
        Cuidador(std::string nome);
		void setNome(std::string nome);
		std::string getNome();
};

#endif