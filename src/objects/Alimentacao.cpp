#include "Alimentacao.hpp"

/**
 * @brief Inicializa os atributos da alimentação do animal. 
 * Por padrão, a quantidade ingerida é 0, e a descrição é [nome] não se alimentou
 * @param peso_porcao Peso por porção ingerida
 * @param tipo_comida Tipo de comida
 * @param nome Nome do animal
 */
Alimentacao::Alimentacao(float peso_porcao, std::string tipo_comida, std::string nome) {
    _qtde_porcao = 0;
    _peso_porcao = peso_porcao;
    _tipo_comida = tipo_comida;
    _descricao = nome += " não se alimentou";
}

/**
 * @brief Salva a quantidade ingerida pelo animal
 * @param qtde_ingerida Qtde. ingerida (em porções)
 */
void Alimentacao::set_qtde_ingerida(float qtde_ingerida) {
    _qtde_porcao = qtde_ingerida;
}

/**
 * @brief Salva uma descrição sobre a alimentação do animal 
 * @param descricao Descrição desejada
 * @param nome Nome do animal
 */
void Alimentacao::set_descricao(std::string descricao, std::string nome) {
    _descricao = nome += " ";
    _descricao += descricao;
}

/**
 * @brief Acessa a descrição completa da alimentação do animal
 * @return A descrição da alimentação
 */
std::string Alimentacao::get_descricao() {
    return _descricao;
}

/**
 * @brief Acessa o tipo de comida do animal
 * @return O tipo de comida
 */
std::string Alimentacao::get_tipo() {
    return _tipo_comida;
}

/**
 * @brief Calcula a quantidade de comida ingerida pelo animal
 * @return Quantidade ingerida em Kg
 */
float Alimentacao::get_kg_gastos() {
    return _qtde_porcao * _peso_porcao;
}