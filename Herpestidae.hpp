#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        static const double QUANTIDADE_PORCAO = 1.0;
        
        std::string especie;

    public:
        Herpestidae(std::string _nome, int _idade, std::string _especie);
        virtual void imprimirDadosAnimal() override;
        virtual double calculaConsumo(int porcao) override;
};

#endif
