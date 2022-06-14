#include <iostream>
#include <string>
#include <sstream>

#include "./Cuidador.hpp"

Cuidador::Cuidador() {}

Cuidador::~Cuidador() {}

void Cuidador::print() const{
	std::cout << "[Cuidador]" << std::endl
        	  << "  Nome: " << getName() << std::endl
		 	  << "  CPF: " << getCpf() << std::endl
			  << "  Telefone: " << getPhone() << std::endl
		 	  << "  Nascimento: " << getBirthday() << std::endl;
	return;
}

void Cuidador::setName(const std::string name) {
	this->name = name;
	return;
}

std::string Cuidador::getName() const {
	return name;
}

void Cuidador::setCpf(const std::string cpf) {
	this->cpf = cpf;
	return;
}

std::string Cuidador::getCpf() const {
	return cpf;
}

void Cuidador::setPhone(const std::string phone) {
	this->phone = phone;
	return;
}

std::string Cuidador::getPhone() const {
	return phone;
}

void Cuidador::setBirthday(const std::string birthday) {
	this->birthday = birthday;
	return;
}

std::string Cuidador::getBirthday() const {
	return birthday;
}

void Cuidador::setWage(const double name) {
	this->wage = wage;
	return;
}

double Cuidador::getWage() const {
	return wage;
}

std::string Cuidador::getFormattedWage() const {
	std::stringstream formattedWage;
    formattedWage.clear();
	formattedWage << "R$ " << std::to_string(getWage()) << std::endl;
	
	return formattedWage.str();
}
