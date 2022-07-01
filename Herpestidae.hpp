#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;
private:
double quantPORCAO = 1;


class Herpestidae : public Animal {
    
    private:
            double quantPORCAO = 1;
            int _kgDeRacaoPorDia;
    public:
            int getRacaoConsumida();
            void print()override;
            string species;
            void kgConsumidosDeRacao(int porcoesConsumidas);
            
 };



#endif
