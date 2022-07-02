#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao {

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuidador;
        Animal animal;
        //string nomeAnimal;

    public:
        Alimentacao(Animal& a, Cuidador& c, int porcao, std::string comida, std::string desc);

        void print();

        int getPorcao();
        std::string getComida();
        std::string getDescricao();
        Cuidador* getCuidador();
        Animal* getAnimal();

        void setComida(std::string comida);

        void setPorcao(int porcao);
   
};

#endif