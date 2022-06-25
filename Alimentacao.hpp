
#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"

using namespace std;

class Alimentacao{

    private:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuidador;
        Animal animal;

    public:
        Alimentacao(int _porcao, string _comida, string _descricao, Cuidador _cuidador, Animal _animal);
        
        void print();

        string getDescricao(){
            return this->descricao;
        }

};

#endif