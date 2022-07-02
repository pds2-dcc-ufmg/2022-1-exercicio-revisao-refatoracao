#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"
using namespace std;

class Herpestidae : public Animal {
    public:
     const double kg_racao = 1;
     double kg_consumida = 0;

     Herpestidae();
     double kg_consumidos_racao(int porcoes_consumidas); // calcula kilos de ração consumida
     void set_familia(); // atribui a família Herpestidae ao animal
     void set_comida(); // atribui a dieta típica do animal

};

#endif
