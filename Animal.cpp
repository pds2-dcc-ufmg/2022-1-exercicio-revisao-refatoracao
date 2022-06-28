#include "Animal.hpp"

using namespace std;

Animal::Animal(int _idade, string _familia, string _nome){
    this->nome = _nome;
    this->familia = _familia;
    this->idade = _idade;
}

string Animal::getNome(){
    return this->nome;
}

int Animal::getIdade(){
    return this->idade;
}

string Animal::getFamilia(){
    return this->familia;
}
