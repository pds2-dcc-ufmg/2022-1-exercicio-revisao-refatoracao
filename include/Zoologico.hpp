#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H

#include <map>

#include "Cuidador.hpp"

using ComidaPair = std::pair<std::string, float>;   //Tipo de par do map _comida_gasta

class Zoologico {
    private:
        std::vector<Cuidador*> _cuidadores;
        std::map<std::string, float> _comida_gasta;

        void calcular_comida_gasta();

    public:
        ~Zoologico();
        void adicionar_cuidador(Cuidador* cuidador);
        void imprimir_animais();
        void imprimir_relatorio_alimentacao();
        void imprimir_relatorio_comida_gasta();
}; 

#endif