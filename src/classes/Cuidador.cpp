#include <iostream>
#include <string>

#include "Cuidador.hpp"

using namespace std;

Cuidador::Cuidador(string nome, string cpf, string telefone, string nascimento, string salario):nome(nome),cpf(cpf),telefone(telefone),nascimento(nascimento),salario(salario){
};

string Cuidador::getNome(){
	return nome;
};

string Cuidador::getCpf(){
	return cpf;
};

string Cuidador::getTelefone(){
	return telefone;
};

string Cuidador::getNascimento(){
	return nascimento;
};

void Cuidador::print_cuidador(){
	cout << "[Cuidador]" << endl << "  Nome: " << getNome << endl << "  CPF: " << getCpf << endl << "  Telefone: " << getTelefone << endl << "  Nascimento: " << getNascimento << endl;
};
