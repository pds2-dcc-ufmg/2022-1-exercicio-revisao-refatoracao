#include "Cuidador.hpp"

Cuidador::Cuidador() : Cuidador("", "", "", 0, 0) {}
 
Cuidador::Cuidador(std::string nome, std::string birth, std::string tel, double sal, long int cpf){
	this->nome = nome;
	this->birth = birth;
	this->telefone = tel;
	this->salario = sal;
	this->cpf = cpf;
}

std::string Cuidador::getNome(){
	return this->nome;
}

std::string Cuidador::getBirth(){
	return this->birth;
}

std::string Cuidador::getTel(){
	return this->telefone;
}

double Cuidador::getSalario(){
	return this->salario;
}

long int Cuidador::getCPF(){
	return this->cpf;
}

void Cuidador::print(){

	std::cout << "[Cuidador]" << std::endl;
	std::cout << "Nome: " << this->getNome() << std::endl;
	std::cout << "CPF: " << this->getCPF() << std::endl;
	std::cout << "Telefone: " << this->getTel() << std::endl;
	std::cout << "Nascimento: " << this->getBirth() << std::endl;

}

