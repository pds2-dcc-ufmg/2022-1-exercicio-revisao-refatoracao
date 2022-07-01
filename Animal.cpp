#include "Animal.hpp"

//metodo construtor da classe
Animal::Animal(int _idade, std::string _familia, std::string _nome){
    this->idade = _idade;
    this->family = _familia;
    this->nome = _nome;
}
//metodo retorna nome do animal
std::string Animal::Get_nome(){
    return nome;
}
//metodo informa sobre animal
void Animal::print(){
    std::cout << "\n[Animal]" << std::endl << "  Nome: " << nome << std::endl << "  Idade: " << idade << std::endl << "  Familia: " << family << std::endl;
}