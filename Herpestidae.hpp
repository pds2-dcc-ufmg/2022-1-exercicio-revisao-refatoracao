#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"



class Herpestidae : public Animal {
    private:
        std::string species;
        double quantPORCAO = 1;
    
    public:
        std::string getSpecies(){
            return species;
        }
        double kgConsumidosDeRacao(int porcoesConsumidas){
            double c = quantPORCAO*porcoesConsumidas;
            return c;
        }


    void print() {

        Animal::print();
        
        std::cout<<"Especie: " << species <<std::endl;

    }
};

#endif
