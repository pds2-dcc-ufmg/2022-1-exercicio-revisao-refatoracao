#ifndef ALIMENTACAO_H
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"


class Alimentacao {

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuidador;
        Animal animal;

    public:
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuidador, Animal _animal);

        void print();
        std::string get_descricao();
        void set_porcao(int k);
        int get_porcao();
        void set_comida(std::string k);
};

#endif