#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"
#define QTD_PORCAO 1
class Herpestidae : public Animal
{

public:
    void print();
    void setEspecie(std::string);
    std::string getEspecie();
    double kgConsumidosDeRacao(int porcoesConsumidas);

private:
    double kgRacao;
};

#endif
