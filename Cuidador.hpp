#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <iostream>
#include <string>

class Cuidador {
    private:
	
	std::string _nome;
	std::string _salario;
	std::string _cpf;
	std::string _telefone;
	std::string _aniversario;
	
    public:
		
	Cuidador::Cuidador(std::string nome, std::string salario, std::string cpf, std::string telefone, std::string aniversario)
	: _nome(nome), _salario(salario), _cpf(cpf), _telefone(telefone), _aniversario(aniversario) {}
    		
	void setNome(std::string nome) { this->_nome = nome; }
       	void setSalario(std::string salario) { this->_salario = salario; }
       	void setCpf(std::string cpf) { this->_cpf = cpf; }
	void setTelefone(std::string telefone) { this->_telefone = telefone; }
        void setAniversario(std::string aniversario) { this->_aniversario = aniversario; }
       

	void print();
}

#endif
