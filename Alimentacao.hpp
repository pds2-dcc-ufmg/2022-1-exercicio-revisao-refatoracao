#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

class Alimentacao
{
    public:
    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuidador;
    std::string nomeAnimal;

    //Imprime na tela o animal e seu cuidador
    void print() 
    {
        std::cout << "Animal: " << nomeAnimal << std::endl;    
        std::cout << " Cuidador: " << cuidador.nome << std::endl;
    }
};

#endif
