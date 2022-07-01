#include <iostream>
#include <string>
#include "Cuidador.hpp"

void Cuidador::print(){

	std::cout <<"[Cuidador]" <<std::endl;
    std::cout<<"Nome: " << Nome_funcionario <<std::endl;
	std::cout<<"CPF: " << cpf <<std::endl;
	std::cout<<"Telefone: " << Telefone <<std::endl;
	std::cout<<"Nascimento: " << BIRTH <<std::endl;

}

std::string Cuidador::get_salario(){
	return salario;
}

std::string Cuidador::get_nome_func(){
	return Nome_funcionario;
}

std::string Cuidador::get_cpf(){
	return cpf;
}

std::string Cuidador::get_telefone(){
	return Telefone;
}

std::string Cuidador::get_Birth(){
	return BIRTH;
}
