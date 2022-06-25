#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    private:
        int idade;
        string nome;
        string especie;

    public:
        void print() {
            std::cout << "[Animal]" << std::endl;
            std::cout << "Nome: " << this->nome << std::endl;
            std::cout << "Idade: " << this->idade << std::endl;
            std::cout << "Especie: " << this->especie << std::endl;
        }

};

#endif
