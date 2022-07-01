#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <string>
#include <iostream>

class Cuidador{
	private:
        std::string nome;
        std::string cpf;
        std::string telefone;
        std::string data_aniversario;
        std::string salario;

	public:
        Cuidador();
        Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _dataAniversario, std::string _salario);
        void imprime_dados_cuidador();
        std::string get_nome();
};

#endif
