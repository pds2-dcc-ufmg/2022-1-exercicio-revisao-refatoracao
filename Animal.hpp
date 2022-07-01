#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Animal {
    private:
        std::string Animal_Idade;
        std::string Animal_Family;
        std::string Animal_Nome;
    public:
        void print();

        void print_oi();
       
        std::string getIdade();
        

        std::string getFamily();

        std::string getNome();
    
};

#endif
