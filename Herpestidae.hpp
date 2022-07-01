#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#define FAMILIA_HERPESTIDAE "Herpestidae"
#define PESO_PORCAO_HERPESTIDAE 1
#define COMIDA_HERPESTIDAE "Ração"

#include "Animal.hpp"

// double quantPORCAO = 1;


class Herpestidae : public Animal {
	public:
	Herpestidae(string _nome, int _idade);
	Herpestidae(string _nome, int _idade, string _especie);
	// public:
	// string species;

	// double kgConsumidosDeRacao(int porcoesConsumidas){
	// 	double c = quantPORCAO * porcoesConsumidas;
	// 	return c;
	// }
	// void print(){
	// 	Animal::print();
	// 	cout << "  Especie: " << species <<endl;
	// }
};

#endif
