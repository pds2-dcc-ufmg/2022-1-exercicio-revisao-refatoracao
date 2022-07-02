#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;

int peixesPorPorcao = 5;

//Classe que representa a família Ursidae
class Ursidae
{
public:
    //Variavel int quer armazena a idade do animal
    int idade;
    //Variavel string que armazena o nome da especie
    string nome;
    //Variavel string que armazena o tipo da especie
    string especie;
    //Variavel double e armazena o peso de peixes consumidos por dia
    double kgPeixePorDia;

    //Funcao para imprimir os dados da especie
    void print();
    //Funcao que retorna a quantidade de peixes consumidos
    double calculaPeixesConsumidos(int porcaoPeixes);
};

#endif
