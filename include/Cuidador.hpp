#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>

/**
 *  \class Cuidador
 */
class Cuidador{

	private:
        double _salario;
		std::string _nome;
		std::string _cpf;
		std::string _telefone;
		std::string _birth;

    public:
        
		Cuidador(std::string nome, std::string cpf, std::string telefone, std::string birth, double salario);

		void print() const;

		double getSalario() const;
		std::string getNome() const;
		std::string getCPF() const;
		std::string getTelefone() const;
		std::string getBirth() const;
};

#endif
