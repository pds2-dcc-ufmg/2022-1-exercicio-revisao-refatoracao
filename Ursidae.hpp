#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include "Animal.hpp"
#include "Cuidador.hpp"
const int PORCAOPEIXES = 5; //as porcoes sao dadas em kg

class Ursidae : public Animal {

    public:
        Ursidae(std::string _nome, int _idade, std::string _especie);
        ~Ursidae();
        void alimentar(std::string _descricao, int _qtd, Cuidador& _cuid) override;

};

#endif


//              DECIDIR OS PARAMETROS DE ALIMENTAR()
 