#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome){

    this->nome = _nome;
}

Cuidador::Cuidador(){
    this->nome = "";
}

std::string Cuidador::getNomeCuidador(){

	return this->nome;
}

