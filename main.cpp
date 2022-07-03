#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{

	Animal animals[4] = {
		Animal(12, "Ursidae", "Bobby"),
		Animal(1, "Ursidae", "Jorge"),
		Animal(7, "Herpestidae", "Bonina"),
		Animal(3, "Ursidae", "Felício"),
	};
	for (Animal animal : animals)
	{
		animal.print();
	}
	Ursidae ursidaes[2] = {
		Ursidae(9, "Tony", "Urso Pardo", 10.5),
		Ursidae(10, "Wanda", "Urso Polar", 7),
	};
	for (Ursidae ursidae : ursidaes)
	{
		ursidae.print();
	}
	Herpestidae herpestidaes[2] = {
		Herpestidae(2, "Catita", "Suricato"),
		Herpestidae(2, "Carolina", "Suricato"),
	};
	herpestidaes[0].print();
	Cuidador cuidadores[2] = {
		Cuidador(3000, "Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000"),
		Cuidador(4000, "Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995")};

	Alimentacao alimentacao[4] = {
		Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuidadores[0], "Bobby"),
		Alimentacao(2, "Ração especial", "Catita comeu direitinho", cuidadores[1], "Catita"),
		Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", cuidadores[1], "Carolina"),
		Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuidadores[0], "Tony"),
	};

	double kgPeixeConsumidos = 0;
	double kgRacaoConsumidos = 0;

	kgPeixeConsumidos = 5 * 2;
	kgRacaoConsumidos += herpestidaes[0].kgConsumidosDeRacao(alimentacao[1].getPorcao());
	kgRacaoConsumidos += herpestidaes[1].kgConsumidosDeRacao(alimentacao[2].getPorcao());
	kgPeixeConsumidos = ursidaes[1].calcula_peixes_consumidos(10);

	cout << " \n \n--------------------------------\n\nRelatorio das alimentações \n"
		 << endl;

	alimentacao[0].print();
	cout << " Descricao: " << alimentacao[0].getDescricao() << endl
		 << endl;

	alimentacao[1].print();
	cout << " Descricao: " << alimentacao[1].getDescricao() << endl
		 << endl;

	alimentacao[2].print();
	cout << " Descricao: " << alimentacao[2].getDescricao() << endl
		 << endl;

	alimentacao[3].print();
	cout << " Descricao: " << alimentacao[3].getDescricao() << endl
		 << "\n";

	cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n"
		 << endl;
	cout << "Tipo de comida: "
		 << "Ração" << endl;
	cout << "Kg consumidos: " << kgRacaoConsumidos << endl;

	cout << "\nTipo de comida: "
		 << "Peixe" << endl;
	cout << "Kg consumidos: " << kgPeixeConsumidos << endl;

	return 0;
}