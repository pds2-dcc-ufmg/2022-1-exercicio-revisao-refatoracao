#include "ReservaAnimal.hpp"

ReservaAnimal::~ReservaAnimal(){
	for(Cuidador* c : cuidadores){
		delete c;
	}
}

void ReservaAnimal::alimentar(string nomeAnimal, double numPorcoes, string descricao){
	Animal* a = getAnimal(nomeAnimal);
	if(kgComidaGasto.count(a->getComida()) == 0){
		kgComidaGasto[a->getComida()] = 0;
	}
	kgComidaGasto[a->getComida()] += a->comer(numPorcoes, descricao);
}

void ReservaAnimal::addCuidador(Cuidador* &cuidador){
	cuidadores.push_back(cuidador);
}

void ReservaAnimal::addAnimal(string nomeCuidador, Animal* &animal){
	animais[animal->getNome()] = animal;
	for(Cuidador* c : cuidadores){
		if(c->getNome() == nomeCuidador){
			c->addAnimal(animal);
		}
	}
}

void ReservaAnimal::listarAnimais(vector<string> nomeAnimais){
	for(string nomeAnimal : nomeAnimais){
		Animal* a = getAnimal(nomeAnimal);
		a->print();
	}
}

void ReservaAnimal::relatorioAlimentacao(vector<string> nomeAnimais){
	cout << " " << endl << " " << endl << "--------------------------------";
	cout << endl << endl << "Relatorio das alimentações "<< endl << endl;
	for(string nomeAnimal : nomeAnimais){
		Cuidador* c = getCuidador(nomeAnimal);
		cout << "Animal: " << nomeAnimal << endl;
		cout << " Cuidador: " << c->getNome() << endl;
		cout << " Descricao: ";
		c->descreverRefeicao(nomeAnimal);
	}
}

void ReservaAnimal::relatorioKgComida(vector<string> tipoComidas){
	cout << " " << endl << " " << endl << "--------------------------------";
	cout << endl << endl << "Relatorio de kg de comida gastos " << endl;
	for(string tipoComida : tipoComidas){
		map<string, int>::iterator it;
		it = kgComidaGasto.find(tipoComida);
		cout << endl << "Tipo de comida: " << it->first;
		cout << endl << "Kg consumidos: " << it->second << endl;
	}
}

Animal* ReservaAnimal::getAnimal(string nomeAnimal){
	map<string, Animal*>::iterator it;
	it = animais.find(nomeAnimal);
	return it->second;
}

Cuidador* ReservaAnimal::getCuidador(string nomeAnimal){
	for(Cuidador* c : cuidadores){
		if(c->cuidaAnimal(nomeAnimal)){
			return c;
		}
	}
	return nullptr;
}