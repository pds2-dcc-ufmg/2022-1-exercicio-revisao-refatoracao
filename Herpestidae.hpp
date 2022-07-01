#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"
#include <iomanip>

class Herpestidae : public Animal {


    private:
     
       std::string _especies;

    public:

        Herpestidae( Animal Herpestidae, std::string especie) ;
        virtual void print() override ;
        virtual double PorcaoConsumida ( double porcao ) override;

};

#endif
