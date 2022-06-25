#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    public:
        string idade;
        string familia;
        string nome;

        void print() {
            cout << "\n[Animal]" << endl
            << "  Nome: " << nome << endl

              << "  Idade: " << idade << endl
            << "  Familia: " << familia << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
