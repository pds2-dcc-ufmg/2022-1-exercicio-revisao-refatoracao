#ifndef URSIDAE_H
#define URSIDAE_H

#define PESO_PORCAO_URSIDAE 5.0f    //Atributos da família Ursidae
#define TIPO_COMIDA_URSIDAE "Peixe"
#define FAMILIA_URSIDAE "Ursidae"

#include "Animal.hpp"

class Ursidae : public Animal {
    private:
        std::string _familia;
        std::string _especie;

    public:
        Ursidae(std::string nome, int idade, std::string especie);
        virtual void imprimir_info() override;
};

#endif
