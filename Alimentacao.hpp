
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{
	public:
	int porcao;
	string comida;
	string descricao;
	Cuidador cuid;
	string nomeAnimal;

	void print(){
		cout << "Animal: " << nomeAnimal << "\n" << " Cuidador: " << cuid.NOME << "\n";
	}
};

#endif