#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal.hpp"

class Ursidae : public Animal {
    private:
        std::string especie;
        double kg_peixe_dia;

    public:
        Ursidae(std::string _nome, int _idade, std::string _especie, double _kg_peixe_dia);
        void mostrarInfo() override;

};

#endif
