#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador::Cuidador(std::string _nome){
	this->nome = _nome;

}

std::string Cuidador::Cuidador::getNome(){
	return this->nome;
}