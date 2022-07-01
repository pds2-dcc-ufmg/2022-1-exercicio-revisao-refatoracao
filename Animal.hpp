#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <vector>
#include "Alimentacao.hpp"
#include "Cuidador.hpp"

class Animal {
    
    protected:
        int idade;
        std::string familia;
        std::string especie;
        std::string nome;
        Alimentacao* hoje;

    public:
        Animal(); 
        virtual ~Animal();
        std::string getNomeAnimal();
        std::string getFamilia();
        int getIdade();
        Alimentacao* getAlimentacao();
        virtual void alimentar(std::string _descricao, int _qtd, Cuidador& _cuid);
        //aumenta qtd total dos estaticos em alimentacao^
        
        void printDados();
};

#endif
