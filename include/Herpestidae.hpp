#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {

    private:
        std::string _especie;
        const double _QUANTPORCAO = 1;

    public:

        Herpestidae(std::string nome, unsigned idade, std::string especie);
        Herpestidae(std::string nome, unsigned idade);

        double kgConsumidosDeRacao(int porcoesConsumidas) const;

        void print() const override;

        void adicionarConsumo(double kg) override;
};

#endif
