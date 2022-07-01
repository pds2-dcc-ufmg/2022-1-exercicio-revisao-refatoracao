#ifndef Cuidador_H
#define Cuidador_H

#include <string>
#include <iostream>

class Cuidador{

	private:

    std::string _salario ;
		std::string _nome ;
		std::string _cpf ;
		std::string _telefone ;
		std::string _dataNascimento ;

  public:

    Cuidador(std::string salario ,std::string nome,std::string cpf, std::string telefone, std::string dataNascimento );
    std::string GetNome () ;

};

#endif
