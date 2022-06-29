#include"Animal.hpp"

Animal::Animal(int _idade, string _familia, string _nome, string _especie){
    idade = _idade;
    familia = _familia;
    nome = _nome;
    especie = _especie;
}

Animal::Animal() {}

Animal::~Animal() {}

string Animal::getEspecie() {
    return this->especie;
}

string Animal::getFamilia() {
    return this->familia;
}

string Animal::getNome() {
    return this->nome;
}

int Animal::getIdade() {
    return this->idade;
}

void Animal::print(){
if(this->especie == ""){
        cout << "[Animal]" << endl;
        cout << "Nome: " <<  this->getNome() << endl;
        cout << "Idade: " << this->getIdade() << endl;
        cout << "Familia: " << this->getFamilia() << endl;
    }else{
        cout << "[Animal]" << endl;
        cout << "Nome: " <<  this->getNome() << endl;
        cout << "Idade: " << this->getIdade() << endl;
        cout << "Familia: " << this->getFamilia() << endl;
        cout << "Espécie: " << this->getEspecie() << endl;
    }
}    