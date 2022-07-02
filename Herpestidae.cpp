#include "Herpestidae.hpp"
    Herpestidae::Herpestidae(string _idade, string _nome, string _especie): Animal(_idade,"Herpestidae",_nome){
            this->especie = _especie;
            this->alimentoPorPORCAO = 1;
    }
    Herpestidae::Herpestidae(string _idade, string _nome): Animal(_idade,"Herpestidae",_nome){
        this->alimentoPorPORCAO = 1;
    }

    double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
        double totalConsumido = this->alimentoPorPORCAO*porcoesConsumidas;
                  return totalConsumido;
    }



