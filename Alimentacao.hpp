
#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <vector>
#include <map>
#include <unordered_map>

#include "Cuidador.hpp"
#include "Animal.hpp"

using namespace std;

class Alimentacao{

    private:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuidador;
        Animal* animal;

    public:
        Alimentacao();
        Alimentacao(Animal* _animal, Cuidador& _cuidador, string _comida, int _porcao, string _descricao);
        void print();
        void alimentar(map<string, double>& tipoAlimento);
        double calcularKgConsumidos(map<string, double>& tipoAlimento);
        string getDescricao();
};

#endif