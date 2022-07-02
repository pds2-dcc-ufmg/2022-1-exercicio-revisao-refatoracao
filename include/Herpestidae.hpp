#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"


class Herpestidae : public Animal {

    private:
        std::string _especie;
        int _KgRacaoConsumido;
        const int RACAO_POR_PORCAO = 1;

    public:
        Herpestidae(std::string nome, int idade, std::string especie);
        Herpestidae(std::string nome, int idade);
        void print() override;
        int get_KgRacaoConsumido();
        void set_KgRacaoConsumido(int porcoesConsumidas);

};

#endif
