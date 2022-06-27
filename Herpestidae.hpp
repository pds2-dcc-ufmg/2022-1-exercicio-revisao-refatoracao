#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"


class Herpestidae : public Animal {


    private:
     
       std::string _especies;

    public:

        Herpestidae( Animal Herpestidae, std::string especie) ;
        virtual void print() override ;
        virtual double PorcaoConsumida ( double porcao ) override ;

};

#endif
