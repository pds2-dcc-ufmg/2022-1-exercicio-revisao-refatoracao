#include "Cuidador.hpp"

Cuidador::Cuidador(std::string nome) :_nome(nome) {}

Cuidador::Cuidador() {}

std::string Cuidador::getNome(){
    return this->_nome;
}       

void Cuidador::setNome(std::string nome){
    this->_nome = nome;
}