#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include "Animal.hpp"

class Ursidae : public Animal{
    private:    
        static double constexpr PEIXES_POR_PORCAO = 5.0;

        std::string especie;
        double kg_peixe_por_dia;

    public:
        Ursidae(std::string _nome, int _idade, std::string _especie, double _kgDePeixe);
        virtual void imprimir_dados_animal() override;
        virtual double calcula_consumo(int porcao) override;

};

#endif