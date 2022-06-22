
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

#include <string>

class Alimentacao {
    private:
        int porcao;
        Cuidador cuidador;
        std::string tipoComida;
        std::string descricao;
        std::string nomeAnimal;
        double kgPeixeConsumidos;
        double kgRacaoConsumidos;

    public:
        Alimentacao();
        void cadastrar(int _porcao, Cuidador& _cuidador, std::string _tipoComida, std::string _descricao, std::string _nomeAnimal);
        int getPorcao();
        void setKgPeixeConsumidos(double _kgPeixeConsumidos);
        void setKgRacaoConsumidos(double _kgRacaoConsumidos);
        double getKgPeixeConsumidos();
        double getKgRacaoConsumidos();
        std::string getDescricao();
        void print();
};

#endif