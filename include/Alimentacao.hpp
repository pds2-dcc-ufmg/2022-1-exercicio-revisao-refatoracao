#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"


class Alimentacao{

    private:
        int _porcao;
        std::string _comida;
        std::string _descricao;
        Cuidador _cuidador;
        Herpestidae *_herpestidae = nullptr;
        Ursidae *_ursidae = nullptr;
        int _KgTotalPeixe;
        int _KgTotalRacao;
        
        
       

    public:
        Alimentacao();
        Alimentacao(int porcao, std::string comida, std::string descricao, Cuidador cuid, Herpestidae *herp);
        Alimentacao(int porcao, std::string comida, std::string descricao, Cuidador cuid, Ursidae *urs);
        void print();
        int get_PeixeConsumido();
        int get_KgRacaoConsumido();

    };

#endif