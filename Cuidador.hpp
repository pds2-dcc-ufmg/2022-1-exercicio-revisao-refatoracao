#ifndef Cuidador_H
#define Cuidador_H

#include <string>
#include <iomanip>
using namespace std;

class Cuidador
{

public:
	string salario;
	string NOME;
	string cpf;
	string Telefone;
	string BIRTH;

	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
