#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"



class Herpestidae : public Animal {
    private:
        std::string species;
        double quantPORCAO = 1;
    
    public:
        std::string getSpecies();
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print();
};

#endif
