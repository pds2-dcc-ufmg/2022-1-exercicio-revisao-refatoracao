#include "Ursidae.hpp"

  Ursidae::Ursidae(){
  }

  double Ursidae::calcula_peixes_consumidos(int porcaoPeixes){
    return peixes_por_porcao*porcaoPeixes;
  }
 
  void Ursidae::set_familia(){
    this->familia = "Ursidae";
  }

  void Ursidae::set_comida(){
    this->comida = "Peixe";
  }