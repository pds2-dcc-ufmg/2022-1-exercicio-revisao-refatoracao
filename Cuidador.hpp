#ifndef Cuidador_H
#define Cuidador_H

#include <string>
using namespace std;

class Cuidador{

	protected:
   		string salario;
		string nome;
		string cpf;
		string telefone;
		string data_nascimento;
	public:
		void print(); // imprime na tela os dados de um cliente cadastrado
		void setSalario(string _salario);
		void setNome(string _nome);
		void setCpf(string _cpf);
		void setTelefone(string _telefone);
		void setData_nascimento(string _data_nascimento);
		string getNome();

};

#endif
