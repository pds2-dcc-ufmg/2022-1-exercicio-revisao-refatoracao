#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <iostream>

using namespace std;

class Alimentacao{
	private:
	double pesoPorcao;
	string comida;
	string descricao;
	// double kgComido;
	bool alimentado;

	public:
	Alimentacao();
	Alimentacao(int _pesoPorcao, string _comida);
	string getTipo();
	double pesoRefeicao(double numPorcoes);
	void setAlimentado(string _descricao);
	string getDescricao();

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