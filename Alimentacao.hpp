#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

class Alimentacao {

    private:
        static int PEIXES_POR_PORCAO;
        static int QUANT_PORCAO;

        int porcao;
        std::string comida;
        std::string descricao;
        std::string nomeAnimal;
        Cuidador cuidador;

    public:
        Alimentacao() {};
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, std::string _nomeAnimal, Cuidador _cuidador);
        int getPorcao() { return this->porcao; };
        int calcularPeixesConsumidos(int _porcaoPeixes);
        int calcularKgConsumidosRacao(int _porcoesConsumidas);
        void mostrarRelatorioIndividual(); 
        void mostrarConsumoTotal(int _totalRacao, int _totalPeixe);
        

};

#endif
