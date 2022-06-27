#include "Animal.hpp"
#include <iostream>

Animal::Animal::Animal(){
    this->nome = "NULL";
    this->idade = -1;
}

Animal::Animal::Animal(std::string _nome, int _idade){
    this->nome = nome;
    this->idade = idade;
}

void Animal::Animal::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Familia: " << familia << std::endl;
}

int Animal::Animal::getIdade(){
    return this->idade;
}

std::string Animal::Animal::getFamilia(){
    return this->familia;
}

std::string Animal::Animal::getNome(){
    return this->nome;
}

void Animal::Animal::setIdade(int _idade){
    this->idade = _idade;
}

void Animal::Animal::setFamilia(std::string _familia){
    this->familia = _familia;
}

void Animal::Animal::setNome(std::string _nome){
    this->nome = _nome;
}

void Animal::Animal::setEspecie(std::string _especie){
    this->especie = _especie;
}

std::string Animal::Animal::getEspecie(){
    return this->especie;
}