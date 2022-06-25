#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _telefone) : nome(_nome), telefone(_telefone)
{}

void Cuidador::print(){

	std::cout << "[Cuidador]" << std::endl
        	  << "Nome: " << nome << std::endl
		  	  << "Telefone: " << telefone << std::endl;

}