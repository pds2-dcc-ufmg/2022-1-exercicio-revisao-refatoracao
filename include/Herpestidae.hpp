#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {
    private:
        const int _RACAOPORPORCAO = 1;
        int _consumoDeRacao;
    public:
        Herpestidae(string nome, int idade, string especie, Alimentacao& alimentacao, Cuidador& cuidador);
        Herpestidae(string nome, int idade);
        
        int getConsumo();

};

#endif
