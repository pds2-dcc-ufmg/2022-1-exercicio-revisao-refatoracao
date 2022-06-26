#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include"Animal.hpp"

class Ursidae: public Animal {

private:
    std::string especie;
    double qtdePeixe; //quantidade de peixes consumidos diariamente em kg
    
public:
    Ursidae();
    Ursidae(std::string nome, std::string idade, std::string especie, double qtdePeixe);//Metodo construtor de um ursidae
    double peixesConsumidos(int porcaoPeixes); //calcula a quantidade de peixes consumidos pelo animal
    virtual void print() override;

};

#endif