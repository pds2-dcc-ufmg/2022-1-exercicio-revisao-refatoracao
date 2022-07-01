#include <fstream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
#include "ReservaAnimal.hpp"

string lerLinha(ifstream& file){
	string linha;
	getline(file, linha);
	if(linha.empty()){
		linha = lerLinha(file);
	}
	return linha;
}

void adicionarCuidadores(ReservaAnimal& reserva, ifstream& file){
	int numCuidadores;
	file >> numCuidadores;

	for(int i = 0; i < numCuidadores; i++){
		string nomeCuidador = lerLinha(file);
		Cuidador* c = new Cuidador(nomeCuidador);
		reserva.addCuidador(c);
	}
}

void adicionarAnimais(ReservaAnimal& reserva, ifstream& file){
	int numAnimais;
	file >> numAnimais;

	for(int i = 0; i < numAnimais; i++){
		string nomeAnimal = lerLinha(file);
		
		int idade;
		file >> idade;

		string familia = lerLinha(file);

		Animal* a;
		if(familia == "Ursidae"){
			a = new Ursidae(nomeAnimal, idade);
		}
		else if(familia == "Herpestidae"){
			a = new Herpestidae(nomeAnimal, idade);
		}

		bool temEspecie;
		file >> temEspecie;

		string especie;
		if(temEspecie){
			especie = lerLinha(file);
			a->setEspecie(especie);
		}

		string cuidador = lerLinha(file);

		reserva.addAnimal(cuidador, a);
	}
}

void listAnimais(ReservaAnimal& reserva, ifstream& file){
	int numAnimais;
	file >> numAnimais;

	vector<string> nomeAnimais;
	for(int i = 0; i < numAnimais; i++){
		string nomeAnimal = lerLinha(file);
		nomeAnimais.push_back(nomeAnimal);
	}

	reserva.listarAnimais(nomeAnimais);
}

void refeicao(ReservaAnimal& reserva, ifstream& file){
	int numAnimais;
	file >> numAnimais;

	for(int i = 0; i < numAnimais; i++){
		string nomeAnimal = lerLinha(file);

		int numPorcoes;
		file >> numPorcoes;

		string descricao = lerLinha(file);

		reserva.alimentar(nomeAnimal, numPorcoes, descricao);
	}
}

void relatorioRefeicao(ReservaAnimal& reserva, ifstream& file){
	int numAnimais;
	file >> numAnimais;

	vector<string> nomeAnimais;
	for(int i = 0; i < numAnimais; i++){
		string nomeAnimal = lerLinha(file);
		nomeAnimais.push_back(nomeAnimal);
	}

	reserva.relatorioAlimentacao(nomeAnimais);
}

void relatorioPeso(ReservaAnimal& reserva, ifstream& file){
	vector<string> tipoComidas;
	tipoComidas.push_back("Ração");
	tipoComidas.push_back("Peixe");

	reserva.relatorioKgComida(tipoComidas);
}

int main()
{
	ifstream file;
	file.open("ReservaPadrão.txt");

	ReservaAnimal reserva;
	
	bool continuar = true;
	while(continuar){
		char comando;
		file >> comando;

		switch (comando){
		case 'c': {
			adicionarCuidadores(reserva, file);
			break;
		}

		case 'a': {
			adicionarAnimais(reserva, file);
			break;
		}

		case 'l': {
			listAnimais(reserva, file);
			break;
		}

		case 'r': {
			refeicao(reserva, file);
			break;
		}

		case 't': {
			relatorioRefeicao(reserva, file);
			break;
		}

		case 'p': {
			relatorioPeso(reserva, file);
			break;
		}

		case 'q': {
			continuar = false;
			break;
		}

		default:
			break;
		}
	}
	file.close();
	return 0;
}
