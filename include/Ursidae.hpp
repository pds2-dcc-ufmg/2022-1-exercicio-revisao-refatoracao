#include "Animal.hpp"

#ifndef URSIDAE_HPP
#define URSIDAE_HPP

class Ursidae : public Animal {

    private:
        string especie;

    public:
        Ursidae();
        Ursidae(string nome, string especie, int idade);
        Ursidae(string nome, string especie, int idade, float quantidadePorcao, float pesoPorcao, string tipoComida);
        
        virtual void print() override;
};

#endif

