#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        const double kgRacaoPorPocao = 1;

    public:
        Herpestidae(std::string _nome, std::string _idade, std::string _especie);

        Herpestidae(std::string _nome, std::string _idade);

        ~Herpestidae();

        double calculaKgAlimentoConsumidos(int porcoesConsumidas) override;
};

#endif