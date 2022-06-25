#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(string _nome, string _telefone) : nome(_nome), telefone(_telefone)
{}

void Cuidador::print(){

	std::cout << "[Cuidador]" << endl
        	  << "  Nome: " << nome << endl
		  	  << "  Telefone: " << telefone << endl;

}