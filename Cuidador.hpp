#ifndef CUIDADOR_H
#define CUIDADOR_H
#include <string>

using namespace std;

class Cuidador{
	private:

		string salario;
		string nome;
		long int cpf;
		string telefone;
		string nascimento;

	public:

		//Inicializa um cuidador atribuindo os valores a ele
		Cuidador();
		Cuidador(string _nome, int _cpf, string _telefone, string _nascimento, string _salario);

		//Imprime na tela os dados de um cuidador cadastrado
		void print();

		//Permite o acesso das variaveis fora da classe
		string getSalario();
		string getNome();
		long int getCpf();
		string getTelefone();
		string getNascimento();

		//Permite modificar as variaveis fora da classe
		void setSalario(string _salario);
		void setNome(string _nome);
		void setCpf(long int _cpf);
		void setTelefone(string _telefone);
		void setNascimento(string _nascimento);

};

#endif
