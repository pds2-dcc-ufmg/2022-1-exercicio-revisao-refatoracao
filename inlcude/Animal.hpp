#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal{

protected:
    string familia;
    string nome;
    string idade;
    string especie;

public:
    Animal(string familia, string nome, string idade);
    string get_idade(){
        return idade;
    };
    string get_nome(){
        return nome;
    };
    string get_familia(){
        return familia;
    };
    string get_Especie(){
        return especie;
    }
    void print_animal(){
        cout << "\n[Animal]" << endl << "  Nome: " << nome << endl << "  Idade: " << idade << endl << "  Familia: " << familia << endl;
    }

};

#endif
