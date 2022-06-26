#include "Animal.hpp"

void Animal::print(){
    cout << "\n[Animal]" << endl
        << "Nome: " << this->nome << endl
        << "Idade: " << this->idade << endl
        << "Familia: " << this->familia<< endl;
}

void Animal::print_oi(){
    cout << "Tchau" << endl;
}

void Animal::setIdade(string _idade){
    this->idade = _idade;
}
void Animal::setFamilia(string _familia){
    this->familia = _familia;
}
void Animal::setNome(string _nome){
    this->nome = _nome;
}
    

    
