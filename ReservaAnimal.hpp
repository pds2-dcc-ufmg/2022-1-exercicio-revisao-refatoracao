#ifndef RESERVAANIMAL_H
#define RESERVAANIMAL_H

#include "Animal.hpp"
#include "Cuidador.hpp"
#include <map>

class ReservaAnimal{
	private:
	vector<Cuidador*> cuidadores;
	map<string, Animal*> animais;
	map<string, int> kgComidaGasto;

	public:
	~ReservaAnimal();
	void alimentar(string nomeAnimal, double porcoes, string _descricao);
	void addCuidador(Cuidador* &cuidador);
	void addAnimal(string nomeCuidador, Animal* &animal);
	void listarAnimais(vector<string> nomeAnimais);
	void relatorioAlimentacao(vector<string> nomeAnimais);
	void relatorioKgComida(vector<string> tipoComidas);
	Animal* getAnimal(string nomeAnimal);
	Cuidador* getCuidador(string nomeAnimal);

};

#endif