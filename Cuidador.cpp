#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){
	cout << "[Cuidador]" << endl
        << "Nome: " << this->nome << endl
		<< "CPF: " << this->cpf << endl
		<< "Telefone: " << this->telefone << endl
		<< "Nascimento: " << this->data_nascimento << endl;

}

