#include "Animal.hpp"

Animal::~Animal() {}

Animal::Animal(std::string nome, int idade, float peso_porcao, std::string tipo_comida) {
    _nome = nome;
    _idade = idade;
    _alimentacao = Alimentacao(peso_porcao, tipo_comida, nome);
}

void Animal::set_qtde_ingerida(float qtde_ingerida) {
    _alimentacao.set_qtde_ingerida(qtde_ingerida);
}

void Animal::set_descricao(std::string descricao) {
    _alimentacao.set_descricao(descricao, _nome);
}

std::string Animal::get_descricao() {
    return _alimentacao.get_descricao();
}

std::string Animal::get_tipo_comida() {
    return _alimentacao.get_tipo();
}

float Animal::get_kg_gastos() {
    return _alimentacao.get_kg_gastos();
}

std::string Animal::get_nome() {
    return _nome;
}
