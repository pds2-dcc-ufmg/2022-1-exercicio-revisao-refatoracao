#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <iomanip>
using namespace std;

class Cuidador
{
public:
	void setSalario(std::string);
	std::string getSalario();
	void setNome(std::string);
	std::string getNome();
	void setCpf(std::string);
	std::string getCpf();
	void setTelefone(std::string);
	std::string getTelefone();
	void setAniversario(std::string);
	std::string getAniversario();
	void print();

private:
	std::string salario;
	std::string nome;
	std::string cpf;
	std::string telefone;
	std::string aniversario;
};

#endif
