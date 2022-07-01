#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao {

    private:
        int porcao;
        std::string comida;
        Animal *animal;
        Cuidador *cuidador;
        std::string descricao;
        double kgConsumidos;

    public:
        Alimentacao(int _porcao, std::string _comida, Animal *_animal, Cuidador *_cuidador);

        void adicionarDescricao(std::string _descricao);
        
        double getKgConsumidos();

        //Imprime o nome do animal, nome do cuidador e a descricao
        void print();

};

#endif