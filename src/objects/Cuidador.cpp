#include "Cuidador.hpp"

Cuidador::~Cuidador(){
	for(Animal* a : animaisCuidados){
		delete a;
	}
}

Cuidador::Cuidador(string _nome) : nome(_nome){};

void Cuidador::addAnimal(Animal* &_animal){
	animaisCuidados.push_back(_animal);
}

void Cuidador::listAnimais(){
	for(Animal* a : animaisCuidados){
		a->print();
	}
}

void Cuidador::descreverRefeicao(string nomeAnimal){
	for(Animal* a : animaisCuidados){
		if(a->getNome() == nomeAnimal){
			cout << nomeAnimal << " " << a->getDescAlimentacao() << endl << endl;
		}
	}
}

bool Cuidador::cuidaAnimal(string nomeAnimal){
	for(Animal* a : animaisCuidados){
		if(a->getNome() == nomeAnimal){
			return true;
		}
	}
	return false;
}

string Cuidador::getNome(){
	return nome;
}