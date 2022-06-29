#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include<iomanip>
#include<sstream>
#include<string>
#include<sstream>
#include"Animal.hpp"

using std::string;

class Herpestidae : public Animal {

    private:
    double kgPorPorcao;
    string especie;

    public:

    Herpestidae(int _idade, string _familia, string _nome, string _especie, double _kgPorPorcao);

    Herpestidae();

    ~Herpestidae();
    
    double kgConsumidosDeRacao(int porcoesConsumidas);

};

#endif
