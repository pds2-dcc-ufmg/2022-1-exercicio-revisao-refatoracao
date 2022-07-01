#include "Animal.hpp"

Animal::~Animal(){}

Animal::Animal(string _nome, int _idade, string _familia, int _porcao, string _comida) : nome(_nome), idade(_idade), familia(_familia){
	alimentacao = Alimentacao(_porcao, _comida);
}

double Animal::comer(double numPorcoes, string descricao){
	alimentacao.setDescricao(descricao);
	return alimentacao.pesoRefeicao(numPorcoes);
}

void Animal::print(){
	cout << endl << "[Animal]" << endl;
	cout << "  Nome: " << nome << endl;
	cout << "  Idade: " << idade << endl;
	cout << "  Familia: " << familia << endl;
	if(!especie.empty()){
		cout << "  Especie: " << especie << endl;
	}
}

void Animal::setEspecie(string _especie){
	especie = _especie;
}

string Animal::getNome(){
	return nome;
}

string Animal::getComida(){
	return alimentacao.getTipo();
}

string Animal::getDescAlimentacao(){
	return alimentacao.getDescricao();
}