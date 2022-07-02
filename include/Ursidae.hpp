#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal.hpp"

class Ursidae : public Animal{
    public:
     const int peixes_por_porcao = 5;
     double kg_consumida = 0;
     double kg_peixe_diario;

     Ursidae();
     double calcula_peixes_consumidos(int porcaoPeixes); // calcule peixes consumidos
     void set_familia(); // atribui a família Herpestidae ao animal
     void set_comida(); // atribui a dieta típica do animal
};

#endif


