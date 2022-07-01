#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    public:
    int idade;
    string familia;
    string nome;

    virtual void print() {
        cout << endl <<"[Animal]" << endl << "  Nome: " << nome << endl << "  Idade: " << idade << endl << "  Familia: " << familia << endl;
    }
    Animal(string nome, int idade, string familia){
        this->nome = nome;
        this->familia = familia;
        this->idade = idade;
    }
    Animal();
    string getnome(){return nome;}
    virtual double kgComidaConsumida(double porcao) {return 0;};
};

#endif
