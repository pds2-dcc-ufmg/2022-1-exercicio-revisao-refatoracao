
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

class Alimentacao{

    private:
    
        static double peixes_consumidos;
        static double racao_consumida;
        int porcao;
        std::string comida, descricao;
        Cuidador cuid;
        std::string animalNome;
        
    
    public:
    
        Alimentacao(int porcao, std::string comida, std::string descricao, Cuidador cuid, std::string animalNome);
        void print();
        std::string getDescricao();
        double calcula_peixes_consumidos(int porcao_peixes);
        double kg_consumidos_de_racao(int porcoesConsumidas);
};

#endif
