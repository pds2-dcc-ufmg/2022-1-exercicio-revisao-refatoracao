#include "Zoologico.hpp"

/**
 * @brief Destrói o zoológico e libera a
 * memória ocupada por todos os seus cuidadores
 */
Zoologico::~Zoologico() {
    for (Cuidador* &cuidador : _cuidadores)
        delete cuidador;
}

/**
 * @brief Adiciona um cuidador ao zoológico
 * @param cuidador Cuidador a ser adicionado
 */
void Zoologico::adicionar_cuidador(Cuidador* cuidador) {
    _cuidadores.push_back(cuidador);
}

/**
 * @brief Calcula a quantidade de comida gasta por tipo. 
 * Este método é altamente adaptativo, capaz de reconhecer e somar
 * os gastos de qualquer novo tipo de comida independente do animal
 */
void Zoologico::calcular_comida_gasta() { 
    for (Cuidador* &cuidador : _cuidadores) {   //Escaneia os animais de todos os cuidadores
		std::vector<Animal*> animais = cuidador->get_todos_animais();

        for (Animal* &animal : animais) {       //Escaneia o tipo de comida de todos os animais
            std::string tipo_comida = animal->get_tipo_comida();

            if (_comida_gasta.count(tipo_comida) == 0)                  //Se for um tipo novo, adiciona aos tipos encontrados
                _comida_gasta.insert(ComidaPair(tipo_comida, 0.0f));    //Inicializa a quantidade do novo tipo em 0

            _comida_gasta.find(tipo_comida)->second += animal->get_kg_gastos(); //Soma ao total a quantidade comida pelo tipo
        }
    } 
}

/**
 * @brief Imprime as informações de todos os animais do zoológico
 */
void Zoologico::imprimir_animais() {
    for (Cuidador* &cuidador : _cuidadores)
		cuidador->imprimir_info_geral();
}

/**
 * @brief Imprime o relatório de alimentação de todos os animais do zoológico
 */
void Zoologico::imprimir_relatorio_alimentacao() {
    std::cout << "--------------------------------" << std::endl << std::endl;
    std::cout << "Relatório das alimentações:" << std::endl << std::endl;

    for (Cuidador* &cuidador : _cuidadores)
		cuidador->imprimir_relatorio_alimentacao();
}

/**
 * @brief Imprime o relatório da quantidade de comida gasta por tipo
 */
void Zoologico::imprimir_relatorio_comida_gasta() {
    calcular_comida_gasta();

    std::cout << "--------------------------------" << std::endl << std::endl;
    std::cout << "Relatório de Kg de comida gastos:" << std::endl << std::endl;

    for (auto it = _comida_gasta.begin(); it != _comida_gasta.end(); it++) {
        std::cout << "Tipo de comida: " << it->first << std::endl;
        std::cout << "Kg consumidos: " << it->second << std::endl << std::endl;
    }
}