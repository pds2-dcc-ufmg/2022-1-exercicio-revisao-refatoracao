
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

class Alimentacao
{

public:
    void print();
    void setPorcao(int);
    double getPorcao();
    void setCuidador(Cuidador);
    Cuidador getCuidador();
    void setComida(std::string);
    std::string getComida();
    void setDescricao(std::string);
    std::string getDescricao();
    void setNomeAnimal(std::string);
    std::string getNomeAnimal();

private:
    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuid;
    std::string nomeAnimal;
};

#endif