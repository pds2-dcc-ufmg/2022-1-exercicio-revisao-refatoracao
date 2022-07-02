#ifndef CUIDADOR_H
#define CUIDADOR_H
#include <string>
// #include <iostream>

class Cuidador{
	private:
		std::string _nome;
		std::string _cpf;
		std::string _telefone;
		std::string _birth;
    	double _salario;
	
	public:

		Cuidador(std::string nome, std::string cpf, std::string telefone,std::string birth, double salario) : 
		_nome(nome), _cpf(cpf), _telefone(telefone), _birth(birth), _salario(salario) {}
		
		void print(); // imprime na tela os dados dos cuidadores cadastrado
		// Gets
		std::string get_nome() {return this -> _nome; };
		

};

#endif
