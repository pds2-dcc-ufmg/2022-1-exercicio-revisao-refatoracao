
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include"Cuidador.hpp"


class Alimentacao{

private:
    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuidador;
    std::string nomeAnimal;
    double quantidadeConsumida;

public:
    Alimentacao(int porcao, std::string comida, std::string descricao, Cuidador cuidador, std::string animal, double quantidadeConsumida);
    Alimentacao()=default;
    double getquantidadeConsumida();
    void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif