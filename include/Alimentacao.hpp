#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <iostream>

using namespace std;

class Alimentacao{
	private:
	double pesoPorcao;
	string comida;
	string descricao;

	public:
	Alimentacao();
	Alimentacao(int _pesoPorcao, string _comida);
	string getTipo();
	double pesoRefeicao(double numPorcoes);
	void setDescricao(string _descricao);
	string getDescricao();
};

#endif