#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "AnimalEspecie.hpp"

class Herpestidae : public AnimalEspecie {
    private:
        static int QUANTIDADEPORCAO;

    public:
        Herpestidae(std::string _nome, std::string _idade, std::string _especie);
        double kgComidaConsumida(int porcoesConsumidas) const override;
};

#endif