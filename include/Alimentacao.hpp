#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Animal.hpp"
#include "Cuidador.hpp"
#include "Ursidae.hpp"
#include "Herpestidae.hpp"


class Alimentacao{
    private:
        static int PORCAO_PEIXE;
        static int TOTAL_PEIXE;
        static int TOTAL_RACAO;

        int _porcao;
        std::string _comida;
        std::string _descricao;
        Cuidador _cuidador;
        std::string _nomeAnimal;
    
    public:

        Alimentacao(int porcao, std::string comida, std::string descricao, Cuidador cuidador, std::string nome_animal):
        _porcao(porcao), _comida(comida), _descricao(descricao), _cuidador(cuidador), _nomeAnimal(nome_animal){}
        
        void alimenta_animal();
        void total_consumido();
        void print();
        void Get_descricao();
};

#endif
