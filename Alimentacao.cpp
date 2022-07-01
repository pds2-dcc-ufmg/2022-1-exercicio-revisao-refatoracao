#include "Alimentacao.hpp"

Alimentacao::Alimentacao(){}

Alimentacao::Alimentacao(int _pesoPorcao, string _comida) : pesoPorcao(_pesoPorcao), comida(_comida){}

string Alimentacao::getTipo(){
	return comida;
}

double Alimentacao::pesoRefeicao(double numPorcoes){
	return numPorcoes * pesoPorcao;
}

void Alimentacao::setAlimentado(string _descricao){
	alimentado = true;
	descricao = _descricao;
}

string Alimentacao::getDescricao(){
	return descricao;
}
