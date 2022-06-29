#ifndef Herpestidae_HPP
#define Herpestidae_HPP
#include "Animal.hpp"

class Herpestidae : public Animal {

    private:
        double quantPORCAO = 1;
        string species;
    public:
        Herpestidae(string, string, int, string);
        double kgConsumidosDeRacao(int);
        void print();
};

#endif
