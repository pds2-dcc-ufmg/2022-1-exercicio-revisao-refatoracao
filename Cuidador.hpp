#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>

class Cuidador {

	std::string salario;
	std::string nome;
	std::string cpf;
	std::string telefone;
	std::string nascimento;


public:
	void print(); // imprime na tela os dados de um cliente cadastrado

	void setSalario(std::string _salario);
	std::string getSalario();


	void setNome(std::string _nome);
	std::string getNome();


	void setCpf(std::string _cpf);
	std::string getCpf();


	void setTelefone(std::string _telefone);
	std::string getTelefone();


	void setNascimento(std::string _nascimento);
	std::string getNascimento();

};

#endif