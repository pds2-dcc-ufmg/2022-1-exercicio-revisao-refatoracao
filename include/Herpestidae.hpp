#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#define PESO_PORCAO_HERPESTIDAE 1.0f    //Atributos da família Herpestidae
#define TIPO_COMIDA_HERPESTIDAE "Ração"
#define FAMILIA_HERPESTIDAE "Herpestidae"

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        std::string _familia;
        std::string _especie;

    public:
        Herpestidae(std::string nome, int idade, std::string especie);
        virtual void imprimir_info() override;
};

#endif
