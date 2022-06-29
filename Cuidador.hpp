#ifndef Cuidador_H
#define Cuidador_H

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
	void setBirth(std::string);
	std::string getBirth();
	void print();

private:
	std::string salario;
	std::string nome;
	std::string cpf;
	std::string telefone;
	std::string birth;
};

#endif
