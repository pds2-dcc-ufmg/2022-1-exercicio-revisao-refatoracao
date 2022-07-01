#ifndef URSIDAE_H
#define URSIDAE_H

#define FAMILIA_URSIDAE "Ursidae"
#define PESO_PORCAO_URSIDAE 5
#define COMIDA_URSIDAE "Peixe"

#include "Animal.hpp"

// int peixesPorPORCAO = 5;

class Ursidae : public Animal{
	public:
	Ursidae(string _nome, int _idade);
	Ursidae(string _nome, int _idade, string _especie);



	// public:
	// int IDADE;
	// string nome;
	// string especie;
	// double kgPeixePorDIA;

	// void print(){
	// 	cout << "\n[Animal]" << endl << "  Nome: " << nome << endl << "  Idade: " << IDADE << endl << "  Família: Ursidae" << endl << "  Especie: " << especie << endl;
	// }
	// double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
	// 	double x;
	// 	return peixesPorPORCAO*porcaoPeixes;
	// }
};

#endif

