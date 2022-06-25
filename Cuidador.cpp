#include <iostream>
#include <string>

#include "Cuidador.hpp"

using namespace std;

Cuidador::Cuidador(string _salario, string _nome, string _cpf, string _telefone, string _nascimento){
  this->nome = _nome;
  this->salario = _salario;
  this->nascimento = _nascimento;
  this->cpf = _cpf;
  this->telefone = _telefone;
}

void Cuidador::print(){
	cout << "[Cuidador]" << endl << "  Nome: " << this->nome << endl << "  CPF: " << this->cpf << endl;
	cout << "  Telefone: " << this->telefone << endl << "  Nascimento: " << this->nascimento << endl<<endl;
}

string Cuidador::getNome(){
  return this->nome;
}
