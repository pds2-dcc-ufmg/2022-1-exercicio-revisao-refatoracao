#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal.hpp"
#include <iostream>
#include <iomanip>



class Ursidae : public Animal {
    
    private:
        std::string _especie;
        int _PeixeConsumido;
        const int PEIXES_POR_PORCAO = 5;

    public:
        Ursidae(std::string nome, int idade, std::string especie);
        Ursidae(std::string nome, int idade);
        void print() override;
        int get_PeixeConsumido();
        void set_PeixeConsumido(int porcoesConsumidas);

         

};

#endif

