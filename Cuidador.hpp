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

    void SetAtributos ( std::string chave, std::string valor ) ;
    std::string GetNome () ;

};

#endif
