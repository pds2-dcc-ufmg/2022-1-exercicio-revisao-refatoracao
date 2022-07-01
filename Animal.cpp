#include "Animal.hpp"

using namespace std;

Animal::Animal(string nome, string idade, string familia){
    _nome = nome;
    _idade = idade;
    _familia = familia;
}

Animal::Animal(){}

void Animal::print(){
    cout << "\n[Animal]" << endl;
    cout << "  Nome: " << _nome << endl;
    cout << "  Idade: " << _idade << endl;
    cout << "  Familia: " << _familia << endl;
}

// retirar a funcao printOi
// void Animal::printOi(){
//     cout << "Tchau" << endl;
// }

// adicionei dois metodos para chamar nos construtores
// de classes filhas
string Animal::getIdade(){return _idade;}

string Animal::getNome(){return _nome;}

string Animal::getFamilia(){return _familia;}