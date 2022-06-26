#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    protected:
        string idade;
        string familia;
        string nome;
    public:
        void print() ;
        void print_oi();
        void setIdade(string _idade) ;
        void setFamilia(string _familia) ;
        void setNome(string _nome) ;
};

#endif
