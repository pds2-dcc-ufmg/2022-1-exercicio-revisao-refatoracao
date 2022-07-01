#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

class Ursidae : public Animal {
    private:
        const double kgPeixesPorPorcao = 5;

    public:
        Ursidae(std::string _nome, std::string _idade, std::string _especie);

        Ursidae(std::string _nome, std::string _idade);

        ~Ursidae();

        double calculaKgAlimentoConsumidos(int porcoesConsumidas) override;
};

#endif