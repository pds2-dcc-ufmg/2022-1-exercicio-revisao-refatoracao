#include "Zoologico.hpp"

Zoologico::~Zoologico() {
    for (Cuidador* &cuidador : _cuidadores)
        delete cuidador;
}

void Zoologico::adicionar_cuidador(Cuidador* cuidador) {
    _cuidadores.push_back(cuidador);
}

void Zoologico::calcular_comida_gasta() { 
    for (Cuidador* &cuidador : _cuidadores) {
		std::vector<Animal*> animais = cuidador->get_todos_animais();

        for (Animal* animal : animais) {
            std::string tipo_comida = animal->get_tipo_comida();

            if (_comida_gasta.count(tipo_comida) == 0)
                _comida_gasta.insert(ComidaPair(tipo_comida, 0));

            _comida_gasta.find(tipo_comida)->second += animal->get_kg_gastos();
        }
    } 
}

void Zoologico::imprimir_animais() {
    for (Cuidador* &cuidador : _cuidadores)
		cuidador->imprimir_info_geral();
}

void Zoologico::imprimir_relatorio_alimentacao() {
    std::cout << "--------------------------------" << std::endl << std::endl;
    std::cout << "Relatório das alimentações:" << std::endl << std::endl;

    for (Cuidador* &cuidador : _cuidadores)
		cuidador->imprimir_relatorio_alimentacao();
}

void Zoologico::imprimir_relatorio_comida_gasta() {
    calcular_comida_gasta();

    std::cout << "--------------------------------" << std::endl << std::endl;
    std::cout << "Relatório de Kg de comida gastos:" << std::endl << std::endl;

    for (auto it = _comida_gasta.begin(); it != _comida_gasta.end(); it++) {
        std::cout << "Tipo de comida: " << it->first << std::endl;
        std::cout << "Kg consumidos: " << it->second << std::endl << std::endl;
    }
}