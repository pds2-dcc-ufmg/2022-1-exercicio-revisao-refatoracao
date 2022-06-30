#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    
    private:

        std::string nome;
        
        int idade;
        
        std::string familia;
        

    public:

        Animal(std::string _nome, int _idade, std::string _familia);

        virtual void print();

        void print_oi(); ///
        
};

#endif
