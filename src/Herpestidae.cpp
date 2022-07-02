#include "Herpestidae.hpp"

    Herpestidae::Herpestidae(){
    }

    double Herpestidae::kg_consumidos_racao(int porcoes_consumidas){
        return kg_racao*porcoes_consumidas;
    }

     void Herpestidae::set_familia(){
        this->familia = "Herpestidae";
    }

     void Herpestidae::set_comida(){
        this->comida = "Ração";
    }
