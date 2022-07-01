#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        std::string familia;
        std::string especie;
    
    public:
        Herpestidae(int _idade, std::string _familia, 
        std::string _nome, std::string especie);
        void print() override;
};

#endif
