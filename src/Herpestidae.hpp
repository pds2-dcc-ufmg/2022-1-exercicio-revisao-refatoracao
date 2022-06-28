#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {
    private:
        std::string especie;
        static int quantPorcao;

    public:
        Herpestidae() = default;
        Herpestidae(std::string _nome, int _idade, std::string _especie);
        
        void print() override;
        double kgConsumidosDeRacao(int porcoesConsumidas);
    
        std::string getAtributo(std::string campo) override;
        void setAtributo(std::string campo, std::string valor) override;

};

#endif
