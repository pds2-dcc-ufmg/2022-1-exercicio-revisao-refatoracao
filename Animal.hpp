#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {
    
    private:
        int idade;
        std::string nome;
        std::string familia;
        std::string especie = "";

    public:
        Animal();
        
        Animal(int idade, std::string nome);

        void print();

        void print_tchau();

        int getIdade();
        std::string getFamilia();
        std::string getEspecie();
        std::string getNome();
        
        void setEspecie(std::string esp);
        void setFamilia(char InicialFamilia);
};

#endif