#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    private:
        int _idade;
        std::string _family;
        std::string _nome;
    public:

        Animal(std::string nome, int idade, std::string family );

        //GETS
        int get_idade() {return this -> _idade; };
        std::string get_nome() {return this -> _nome; };

        virtual void print();
};

#endif
