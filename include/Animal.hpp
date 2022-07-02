#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>



class Animal {
    
    protected:
        std::string _nome;
        int _idade;
        std::string _familia;
        std::string _especie;

    
    public:
        
        Animal();
        Animal(std::string nome, int idade, std::string familia);
        virtual void print();
        std::string get_nome();


};

#endif
