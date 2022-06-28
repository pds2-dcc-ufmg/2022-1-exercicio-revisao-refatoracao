#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <vector>

#include "Animal.hpp"

class Alimentacao {
 private:
  std::vector<Animal> listaAnimais;
  int kgPeixeConsumidos, kgRacaoConsumidos, peixesPorPorcao, racaoPorPorcao;

 public:
  Alimentacao();

  // Printa informações sobre a alimentação dos animais, incluindo nome do
  // animal, cuidador do animal e uma descrição sobre sua alimentação.
  virtual void infoAlimentacao();

  // Durante o calculo de consumo, os animais que consumiram algum tipo de
  // alimento são inseridos na lista de alimentação automaticamente.
  void calculoRacaoConsumida(Animal animal);
  void calculoPeixesConsumidos(Animal animal);

  // Produz um relatório sobre as quantidades consumidas de peixe e ração em um
  // dia pelos animais.
  void relatorioFinal();
};

#endif
