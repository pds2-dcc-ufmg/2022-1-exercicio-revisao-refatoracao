#include "Alimentacao.hpp"

Alimentacao::Alimentacao() {
    _qtde_porcao = 0;
    _peso_porcao = 0;
    _tipo_comida = "";
    _descricao = "";
}

Alimentacao::Alimentacao(float peso_porcao, std::string tipo_comida, std::string nome) {
    _qtde_porcao = 0;
    _peso_porcao = peso_porcao;
    _tipo_comida = tipo_comida;
    _descricao = nome += " não se alimentou";
}

void Alimentacao::set_qtde_ingerida(float qtde_ingerida) {
    _qtde_porcao = qtde_ingerida;
}

void Alimentacao::set_descricao(std::string descricao, std::string nome) {
    _descricao = nome += " ";
    _descricao += descricao;
}

std::string Alimentacao::get_descricao() {
    return _descricao;
}

std::string Alimentacao::get_tipo() {
    return _tipo_comida;
}

float Alimentacao::get_kg_gastos() {
    return _qtde_porcao * _peso_porcao;
}