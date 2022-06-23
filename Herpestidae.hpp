#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"
#include <string>

class Herpestidae : public Animal 
{
private:
    double quantPorcao = 1;
    std::string especie;
public:
    double kgConsumidosDeRacao(int porcoesConsumidas);
    void print();

    void setEspecie(std::string _especie);
    std::string getEspecie();
};

#endif