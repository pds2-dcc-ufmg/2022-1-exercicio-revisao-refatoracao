#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <vector>
#include "Animal.hpp"

using namespace std;

class Cuidador{
	private:
	string nome;
	vector<Animal> animais;

	public:
	void add_animal(Animal& _animal);

	// public:
	// string salario;
	// string NOME;
	// string cpf;
	// string Telefone;
	// string BIRTH;

	// void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
