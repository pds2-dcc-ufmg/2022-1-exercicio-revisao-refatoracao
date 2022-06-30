#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>
#include <iostream>

using namespace std;

class Cuidador{

	public:
		string salario;
		string nome;
		string cpf;
		string telefone;
		string dataNascimento;
		Cuidador(){}
		Cuidador(string _nome, string _cpf, string _telefone, string _dataNascimento, string _salario){
			salario = _salario;
			nome = _nome;
			cpf = _cpf;
			telefone = _telefone;
			dataNascimento = _dataNascimento;
		}
		void print(){
			std::cout << "[Cuidador]" << endl
			<< "  Nome: " << nome << endl
		 	<< "  CPF: " << cpf << endl
			<< "  Telefone: " << telefone << endl
		 	<< "  Nascimento: " << dataNascimento << endl;			
		}

};

#endif
