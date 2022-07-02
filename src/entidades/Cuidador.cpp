#include <iostream>
#include <string>
#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _telefone) : nome(_nome), telefone(_telefone)
{}

std::string Cuidador::getNome(){
	return this->nome;
}