#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <vector>
#include "Animal.hpp"

using namespace std;

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

	// public:
	// string salario;
	// string NOME;
	// string cpf;
	// string Telefone;
	// string BIRTH;

	// void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
