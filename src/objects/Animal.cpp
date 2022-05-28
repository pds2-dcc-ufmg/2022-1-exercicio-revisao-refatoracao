#include "Animal.hpp"

/**
 * @brief Destrói o animal
 */
Animal::~Animal() {}

/**
 * @brief Constrói um novo animal
 * @param nome Nome do animal
 * @param idade Idade do animal
 * @param peso_porcao Peso por porção ingerida
 * @param tipo_comida Tipo de comida
 */
Animal::Animal(std::string nome, int idade, float peso_porcao, std::string tipo_comida) {
    _nome = nome;
    _idade = idade;
    _alimentacao = Alimentacao(peso_porcao, tipo_comida, nome);
}

/**
 * @brief Salva a quantidade ingerida pelo animal
 * @param qtde_ingerida Qtde. ingerida (em porções)
 */
void Animal::set_qtde_ingerida(float qtde_ingerida) {
    _alimentacao.set_qtde_ingerida(qtde_ingerida);
}

/**
 * @brief Salva uma descrição sobre a alimentação do animal,
 * já inclui o nome do animal no início
 * @param descricao Descrição desejada
 */
void Animal::set_descricao(std::string descricao) {
    _alimentacao.set_descricao(descricao, _nome);
}

/**
 * @brief Acessa a descrição completa da alimentação do animal
 * @return A descrição da alimentação
 */
std::string Animal::get_descricao() {
    return _alimentacao.get_descricao();
}

/**
 * @brief Acessa o tipo de comida do animal
 * @return O tipo de comida
 */
std::string Animal::get_tipo_comida() {
    return _alimentacao.get_tipo();
}

/**
 * @brief Calcula a quantidade de comida ingerida pelo animal
 * @return Quantidade ingerida em Kg
 */
float Animal::get_kg_gastos() {
    return _alimentacao.get_kg_gastos();
}

/**
 * @brief Acessa o nome do animal
 * @return O nome do animal
 */
std::string Animal::get_nome() {
    return _nome;
}
