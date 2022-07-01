#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <vector>
#include "Animal.hpp"

class Cuidador{
	private:
	string nome;
	vector<Animal*> animaisCuidados;

	public:
	~Cuidador();
	Cuidador(string _nome);
	void addAnimal(Animal* &_animal);
	string getNome();
	void listAnimais();
	bool cuidaAnimal(string nomeAnimal);
	void descreverRefeicao(string nomeAnimal);
};

#endif
