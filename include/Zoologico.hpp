#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H

#include <iostream>
#include <map>
#include <vector>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

class Zoologico{
    private:
        std::map<std::string, Animal*> animais;
        std::map<std::string, Cuidador*> cuidadores;
        std::map<std::string, Alimentacao*> alimentacoes;

        // vector criado único e exclusivamente para imprimir os animais na ordem desejada
        std::vector<Animal*> vAnimais; 

    public:

        void adicionarAnimal(Animal* animal);
        void adicionarCuidador(Cuidador* cuidador);
        void adicionarAlimentacao(Alimentacao* alimentacao);

        void printAnimais() const;

        // função criada único e exclusivamente para imprimir os animais conforme a main antiga
        void printAnimaisVector(std::string nomeExcecao) const;

        Animal* findAnimal(std::string nome) const;

        Alimentacao* findAlimentacao(std::string nome) const;

        void adicionarConsumoAnimal(Alimentacao& alimentacao);

        void adicionarConsumoGeral();

        void relatorioAlimentacao() const;
        void relatorioAlimentacaoIndiv(std::string nome) const;

        void relatorioConsumo() const;

        void deleteAll();
};

#endif