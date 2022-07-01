#include <iostream>
#include <string>
#include "Cuidador.hpp"

using namespace std;

Cuidador::Cuidador(string nome, string telefone, string cpf, string dataAniversario, string salario){
	_nome = nome;
	_telefone = telefone;
	_cpf = cpf;
	_dataAniversario = dataAniversario;
	_salario = salario;
}

Cuidador::Cuidador(){}

void Cuidador::print(){

	cout << "[Cuidador]" << endl;
    cout << "  Nome: " << _nome << endl;
	cout << "  CPF: " << _cpf << endl;
	cout << "  Telefone: " << _telefone << endl;
	cout << "  Nascimento: " << _dataAniversario << endl;

	return;
}


// getters
string Cuidador::getNome(){return _nome;}

string Cuidador::getDataAniversario(){return _dataAniversario;}

string Cuidador::getCpf(){return _cpf;}

string Cuidador::getSalario(){return _salario;}

string Cuidador::getTelefone(){return _telefone;}

