#include <iostream>
#include <string>
#include "Cuidador.hpp"

/**
 * \brief Construtor de Cuidador
 * \param nome Nome do cuidador
 * \param cpf CPF do cuidador
 * \param telefone Telefone do cuidador
 * \param birth Data de nascimento do cuidador
 * \param salario Salário do cuidador 
*/
Cuidador::Cuidador(std::string nome, std::string cpf, std::string telefone, std::string birth, double salario){
    _nome = nome;
    _cpf = cpf;
    _telefone = telefone;
    _birth = birth;
    _salario = salario;
}


/** \brief Imprime as informações do cuidador */
void Cuidador::print() const{
	std::cout << "[Cuidador]" << std::endl
              << "  Nome: " << _nome << std::endl
		      << "  CPF: " << _cpf << std::endl
              << "  Telefone: " << _telefone << std::endl
              << "  Nascimento: " << _birth << std::endl;
}

/** \return Salario do cuidador*/
double Cuidador::getSalario() const {return _salario;}

/** \return Nome do cuidador*/
std::string Cuidador::getNome() const {return _nome;}

/** \return CPF do cuidador*/
std::string Cuidador::getCPF() const {return _cpf;}

/** \return Telefone do cuidador*/
std::string Cuidador::getTelefone() const {return _telefone;}

/** \return Data de nascimento do cuidador*/
std::string Cuidador::getBirth() const {return _birth;}