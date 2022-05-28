#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <iostream>

class Alimentacao {
    private:
        float _qtde_porcao;
        float _peso_porcao;
        std::string _tipo_comida;
        std::string _descricao;

    public:
        Alimentacao();
        Alimentacao(float peso_porcao, std::string tipo_comida, std::string nome);
        void set_qtde_ingerida(float qtde_ingerida);
        void set_descricao(std::string descricao, std::string nome);
        std::string get_descricao();
        std::string get_tipo();
        float get_kg_gastos();
};

#endif