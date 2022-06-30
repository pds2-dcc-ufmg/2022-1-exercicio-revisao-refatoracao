#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    private:
        std::string _nome;
        int _idade;
        std::string _familia;
        std::string _especie;
        
    public:
        
        Animal(std::string nome, int idade, std::string familia, std::string _especie) 
        : _nome(nome), _idade(idade), _familia(familia), _especie(especie) {}
    
        void setNome(std::string nome) { this->_nome = nome; }
        void setIdade(int idade) { this->_idade = idade; }
        void setFamilia(std::string familia) { this->_familia = familia; }
        void setEspecie(std::string especie) { this->_especie = especie; }

        void print() {
            std::cout << "/n" << "[Animal]  " << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  Família: " << familia << std::endl;
            std::cout << "  Espécie: " << especie << std::endl;
        }
}

#endif
