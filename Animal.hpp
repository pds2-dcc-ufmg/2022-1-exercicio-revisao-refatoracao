#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {
    private:
        string _nome;
        int _idade;
        string _familia;
        
    public:
        
        Animal(string nome, int idade, string familia) : _nome(nome), _idade(idade), _familia(familia) {}
    
        void set_nome(string nome) { this->_nome = nome; }
        void set_idade(int idade) { this->_idade = idade; }
        void set_familia(string familia) { this->_familia = familia; }
    
        void print() {
            std::cout << "/n" << "[Animal]  " << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  Família: " << familia << std::endl;
        }

        void print_oi(){
            std::cout << "Oi" << std::endl;
        }
}

#endif
