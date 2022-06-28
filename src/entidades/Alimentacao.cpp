#include "Alimentacao.hpp"

#include <iostream>

Alimentacao::Alimentacao() {
  this->kgRacaoConsumidos = 0;
  this->kgPeixeConsumidos = 0;
  this->peixesPorPorcao = 5;
  this->racaoPorPorcao = 1;
}

void Alimentacao::infoAlimentacao() {
  std::cout << " \n \n--------------------------------\n\nRelatorio das "
               "alimentações \n"
            << std::endl;

  for (Animal i : listaAnimais) {
    std::cout << "Animal: ";
    std::cout << i.getNome() << "\n";

    std::cout << " Cuidador: ";
    std::cout << i.getNomeCuidador() << "\n";

    std::cout << " Descricao: " << i.getDescricao() << std::endl << std::endl;
  }
}

// Total = porções de ração comidas por animal * quantidade de ração por poção.
void Alimentacao::calculoRacaoConsumida(Animal animal) {
  this->kgRacaoConsumidos += animal.getPorcao() * this->racaoPorPorcao;
  this->listaAnimais.push_back(animal);
}

// Total = porções de peixe comidas por animal * quantidade de peixes por poção.
void Alimentacao::calculoPeixesConsumidos(Animal animal) {
  this->kgPeixeConsumidos += animal.getPorcao() * this->peixesPorPorcao;
  this->listaAnimais.push_back(animal);
}

void Alimentacao::relatorioFinal() {
  std::cout
      << " \n \n--------------------------------\n\nRelatorio de kg de comida "
         "gastos \n"
      << std::endl;
  std::cout << "Tipo de comida: "
            << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << this->kgRacaoConsumidos << std::endl;

  std::cout << "\nTipo de comida: "
            << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << this->kgPeixeConsumidos << std::endl;
}
