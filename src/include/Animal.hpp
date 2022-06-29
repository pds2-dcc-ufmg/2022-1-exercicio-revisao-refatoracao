#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>
#include <vector>
#include "Alimentacao.hpp"

class Animal {
    private:
        unsigned int idade;
        std::string familia;
        std::string especie;
        std::string nome;
        std::vector<Alimentacao*> historicoAlimentar;

    public:
        Animal(std::string nome, std::string especie, unsigned int idade, std::string familia);
        ~Animal();
        void print();
        // std::string getNome();
        // virtual std::string getEspecie() = 0;
        // @brief Adiciona um registro de alimentação do animal
        // @param Nome_da_Comida 
        // @param Quantidade Informada em kg
        // @param Descrição Detalhes sobre o estado do animal, reação, humor
        // @param Data A data deve ser inserida no formato DD-MM-AA
        // @param &Cuidador Profissional responsável por alimentar o animal
        void alimentar(std::string nomeComida, double quantidade, std::string descricao, std::string data, Cuidador cuid);
        std::string getNome();
};

#endif
