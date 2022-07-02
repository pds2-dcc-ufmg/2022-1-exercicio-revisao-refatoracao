#ifndef Herpestidae_H
#define Herpestidae_H

#include "Animal.hpp"

class Herpestidae : public Animal {

    private:
        static int QTD_PORCAO; // 1
        std::string _especie;
    
    public:

        Herpestidae(std::string nome, int idade,std::string familia, std::string especie):
        Animal(nome, idade, familia), _especie(especie) {}
        

        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print() override;
};

#endif
