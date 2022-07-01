#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>
#include <string>

class Cuidador{

	private:
        std::string nome;

    public:
        Cuidador(std::string _nome);
        Cuidador();
		std::string getNomeCuidador(); // retorna o nome do cuidador

};

#endif
