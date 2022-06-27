#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {

    protected:

        std::string _idade ;
        std::string _familia ;
        std::string _nome ;

    public:

        Animal ( std::string idade, std::string familia, std::string nome ) ; 
        virtual void print () ;
        virtual void SetAtributos ( std::string chave, std::string valor ) ;
        virtual double PorcaoConsumida ( double porcao ) ;

};

#endif
