#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>


class Animal {

    private:
        int idade;
        std::string familia;
        std::string nome;
    
    public:
        void print() {
            cout << "\n[Animal]" << std::endl
                << "  Nome: " << nome << std::endl
                << "  Idade: " << idade << std::endl
                << "  Familia: " << familia << std::endl;
        }

        void print_tchau() {
            cout << "Tchau" << endl;
        }
};

#endif
