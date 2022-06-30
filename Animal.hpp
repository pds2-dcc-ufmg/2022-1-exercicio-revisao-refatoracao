#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>
#include "Alimentacao.hpp"

using namespace std;

class Animal{
	protected:
	string nome;
	int idade;
	string especie;
	string familia;
	Alimentacao alimentacao;

	public:
	~Animal();
	Animal();
	Animal(string _nome, int _idade, string _familia, int _porcao, string _comida);
	Animal(string _nome, int _idade, string _familia, int _porcao, string _comida, string _especie);
	void print();
};

#endif
