#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>


class Ursidae 
{
private:
    int peixesPorPorcao = 5;
    int idade;
    std::string nome;
    std::string especie;
    double kgPeixePorDia;
public:
    void print();
    double calculaPeixesConsumidos(int porcaoPeixes);


    void setIdade(int _idade);
    int getIdade();

    void setNome(std::string _nome);
    std::string getNome();

    void setEspecie(std::string _especie);
    std::string getEspecie();

    void setKgPeixePorDia(double _kgPeixePorDia);
    double getKgPeixePorDia();

};

#endif
