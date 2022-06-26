#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H
#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {

    public:
    
        //Inicializa os atributos de Herpestidae e fornece uma especie ao animal
        Herpestidae(string _nome, int _idade);

        //A função calcula a quantidade de alimento consumida por um Herpestidae utilizando kg de ração como unidade de medida 
        double quantidadeDeAlimentoConsumida(int porcoesConsumidas);

};
#endif
