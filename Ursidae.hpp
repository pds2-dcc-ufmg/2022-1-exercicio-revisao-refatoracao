#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

class Ursidae : public Animal{
    private:
        std::string familia;
        std::string especie;
        float peixe_por_dia;
        
    public:
        Ursidae(int _idade, std::string _familia, 
        std::string _nome, std::string _especie);
        void peixes_por_dia(double _peixe_por_dia);
        void print() override;
};

#endif

