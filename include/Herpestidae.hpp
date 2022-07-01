#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H
#include "Animal.hpp"

namespace Animal{
    
    class Herpestidae : public Animal::Animal {

        public:
        
            //Inicializa os atributos de Herpestidae e fornece uma especie ao animal
            Herpestidae(std::string _nome, int _idade);

            //A função calcula a quantidade de alimento consumida por um Herpestidae utilizando kg de ração como unidade de medida 
            double quantidadeDeAlimentoConsumida(int porcoesConsumidas);
    };
} //Herpestidae se relaciona de forma intrinseca com Animal
#endif
