#ifndef ANIMAL_H
#define ANIMAL_H

#include "Alimentacao.hpp"

class Animal {
    protected:
        int _idade;
        std::string _nome;
        Alimentacao _alimentacao;

    public:
        virtual ~Animal();
        Animal(std::string nome, int idade, float peso_porcao, std::string tipo_comida);
        void set_qtde_ingerida(float qtde_ingerida);
        void set_descricao(std::string descricao);
        std::string get_nome();
        std::string get_descricao();
        std::string get_tipo_comida();
        float get_kg_gastos();
        virtual void imprimir_info() = 0;
};

#endif
