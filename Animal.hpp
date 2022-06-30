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
        Animal(){

        }
        Animal(int _idade,string _nome, string _familia){
            idade = _idade;
            nome = _nome;
            familia = _familia;
        }

        virtual void print() {
            cout << "\n[Animal]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  Familia: " << familia << endl;
        }

};

#endif
