#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {

private:
    std::string especie;

public:
    Herpestidae();
    Herpestidae(std::string nome, std::string idade, std::string especie);//Metodo construtor de um herpestidae
    double racaoConsumida(int porcaoConsumida); //retorna a quantidade de ração consumida em kg
    virtual void print() override;

};

#endif