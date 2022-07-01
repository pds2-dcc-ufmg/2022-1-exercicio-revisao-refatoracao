#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        std::string especie;

    public:
        Herpestidae(std::string _nome, int _idade, std::string _especie);
        void mostrarInfo() override;
};

#endif
