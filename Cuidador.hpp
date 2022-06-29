#ifndef Cuidador_H
#define Cuidador_H

#include <string>
#include <iomanip>
using namespace std;

class Cuidador
{
public:
	void setSalario(std::string);
	float setSalario();
	void setNome(std::string);
	std::string getNome();
	void setCpf(std::string);
	std::string getCpf();
	void setTelefone(std::string);
	std::string getTelefone();
	void setBirth(std::string);
	std::string getBirth();
	void print();

private:
	float salario;
	std::string NOME;
	std::string cpf;
	std::string Telefone;
	std::string BIRTH;
};

#endif
