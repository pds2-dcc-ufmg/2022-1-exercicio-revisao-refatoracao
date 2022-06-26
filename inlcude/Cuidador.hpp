#ifndef Cuidador_HPP
#define Cuidador_HPP

#include <string>
using namespace std;

class Cuidador{

private:
	string salario;
	string nome;
	string cpf;
	string telefone;
	string nascimento;

public:
    Cuidador(string nome, string cpf, string telefone, string nascimento, string salario);
	string getNome(); //Retorna o Nome do cuidador
	string getCpf(); //Retorna o CPF
	string getTelefone(); //Retorna o telefone
	string getNascimento(); //Retorna a data de nascimento
	void print_cuidador(); // imprime na tela os dados de um cliente cadastrado
};

#endif
