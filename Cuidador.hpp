#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP
// padronizei o #define
#include <string>
#include <iostream>
// inclui o iostream
using namespace std;

class Cuidador{
	private:
		// alterei operador de acesso
		string _nome;
		string _telefone;
		string _cpf;
		string _dataAniversario;
	protected:
		// alterei o operador de acesso e tipo do salario
		string _salario;

	public:
		Cuidador(string, string, string, string, string);
		Cuidador();

		void print(void); // removi o comentario redundante sobre a funcao
		string getSalario(void);
		string getNome(void);
		string getDataAniversario(void);
		string getCpf(void);
		string getTelefone(void);
};

#endif
