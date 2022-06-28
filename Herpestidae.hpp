#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {
    private:
        const int _RACAOPORPORCAO = 1;
        int _consumoDeRacao;
    public:
        Herpestidae(string nome, int idade, string especie, Alimentacao& alimentacao, Cuidador& cuidador);
        virtual void calculaConsumo() override;
};

#endif
