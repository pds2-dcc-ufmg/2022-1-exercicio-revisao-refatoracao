#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>

class Cuidador {

	private:
		std::string salario;
		std::string nome;
		std::string cpf;
		std::string telefone;
		std::string nascimento;
	
	public:
		Cuidador(){};
		Cuidador(std::string _salario, std::string _nome,	std::string _cpf, std::string _telefone, std::string _nascimento);
		void imprimirDadosCuidador();
		std::string getNome();
		std::string getSalario();
		std::string getCpf();
		std::string getTelefone();
		std::string getNascimento();

		void setNome(std::string _nome);
		void setSalario(std::string _salario);
		void setCpf(std::string _cpf);
		void setTelefone(std::string _telefone);
		void setNascimento(std::string _nascimento);
};

#endif