#include "Ser.hpp"

Ser::Ser(std::string _nome) : nome(_nome){};

Ser::~Ser(){}

std::string Ser::getNome() const{
    return nome;
}