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
        Animal(int _idade, std::string _familia, std::string _nome);

        virtual void print();
        void print_tchau();
        std::string get_nome();
};

#endif
