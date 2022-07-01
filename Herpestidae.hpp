#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        static double constexpr QUANTIDADE_PORCAO = 1.0;
        
        std::string especie;

    public:
        Herpestidae(std::string _nome, int _idade, std::string _especie);
        virtual void imprimir_dados_animal() override;
        virtual double calcula_consumo(int porcao) override;
};

#endif
