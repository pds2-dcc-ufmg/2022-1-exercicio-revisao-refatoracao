#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    private:
        std::string _nome;
        int _idade;
        std::string _familia;
        
    public:
        
        Animal(std::string nome, int idade, std::string familia) : _nome(nome), _idade(idade), _familia(familia) {}
    
        void setNome(std::string nome) { this->_nome = nome; }
        void setIdade(int idade) { this->_idade = idade; }
        void setFamilia(std::string familia) { this->_familia = familia; }
    
        void print() {
            std::cout << "/n" << "[Animal]  " << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  Família: " << familia << std::endl;
        }

        void printOi(){
            std::cout << "Oi" << std::endl;
        }
}

#endif
