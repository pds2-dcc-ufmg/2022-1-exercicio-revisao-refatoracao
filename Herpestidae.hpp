#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include <iostream>
#include "Animal.hpp"
const int RACAO = 1;     //as porcoes sao dadas em kg

class Herpestidae : public Animal {

    private:
        std::string comida;

    public:
        Herpestidae(std::string _nome, int _idade, std::string _especie, std::string _comida);
        ~Herpestidae();
        void alimentar(std::string _descricao, int _qtd, Cuidador& _cuid) override;
        //só comem ração

};

#endif
