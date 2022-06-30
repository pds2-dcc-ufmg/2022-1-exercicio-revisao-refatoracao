#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <iostream>

using namespace std;

class Alimentacao{
	private:
	int porcao;
	string comida;
	string descricao;

	public:
	Alimentacao();
	Alimentacao(int _porcao, string _comida);

	// public:
	// int porcao;
	// string comida;
	// string descricao;
	// Cuidador cuid;
	// string nomeAnimal;

	// void print(){
	// 	cout << "Animal: " << nomeAnimal << "\n" << " Cuidador: " << cuid.NOME << "\n";
	// }
};

#endif