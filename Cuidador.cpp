#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){

	cout << "[Cuidador]" << endl;
    cout << "  Nome: " << NOME << endl;
	cout << "  CPF: " << cpf << endl;
	cout << "  Telefone: " << telefone << endl;
	cout << "  Nascimento: " << BIRTH << endl;
}