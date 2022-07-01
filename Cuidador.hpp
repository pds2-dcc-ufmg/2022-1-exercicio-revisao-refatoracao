#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>
#include <iostream>

class Cuidador {
    private:
	std::string nome;

    public:
        Cuidador() {};
        Cuidador(std::string _nome);
        std::string getNome() { return this->nome; };
};

#endif
