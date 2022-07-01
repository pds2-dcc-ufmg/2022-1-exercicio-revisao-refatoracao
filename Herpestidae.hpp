#ifndef HERPERTIDAE_H
#define HERPESTIDAE_H
// padrinizei o #define
#include "Animal.hpp"
#include <iostream>

using namespace std;

class Herpestidae : public Animal {
    private:
        // mudei operador de acesso
        string _especie;
        // fiz o quantPorcao virar static double
        double _quantPorcao;
    
    public:
        // adicionei um construtor
        Herpestidae(string, string, string, string);
        Herpestidae(string, string, string);
        Herpestidae();

        // implementar no cpp
        double kgConsumidosDeRacao(int);/*{
            double c = quantPORCAO*porcoesConsumidas;
                    return c;
        }*/

        // implementar no cpp
        void print() override;/* { 
            Animal::print();
            std::cout << "  Especie: " << species <<endl;
        }*/
};

#endif
