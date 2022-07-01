#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

class Alimentacao{
    private:
        int porcao;
        std::string comida;
        std::string descricao;
        std::string nome_animal;
        Cuidador cuidador;

    public:
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, std::string _nomeAnimal, Cuidador& _cuidador);
        void imprimir_nome_animal_cuidador();
        int get_porcao();
        void set_porcao(int _porcao);
        std::string get_descricao();
};

#endif