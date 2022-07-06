#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
#include <iostream>
#include <vector>

int main(){
  std::vector<Animal> animais;
  std::vector<Ursidae> ursidaes;
  std::vector<Herpestidae> herpestidaes;
  std::vector<Cuidador> cuidadores;
  std::vector<Alimentacao> alimentacoes;

//CONTRUCAO DOS OBJETOS DE ANIMAL ---------------------------------------
  animais.push_back(Animal("Ursidae", "Bobby", 13));
  animais.push_back(Animal("Ursidae", "Jorge", 1));
  animais.push_back(Animal("Herpestidae", "Bonina", 7));
  animais.push_back(Animal("Ursidae", "Felício", 3));

//CONTRUCAO DOS OBJETOS DE URSIDAE ---------------------------------------
  ursidaes.push_back(Ursidae("Tony", 9, "Urso Pardo", 10.5));
  ursidaes.push_back(Ursidae("Wanda", 10, "Urso Polar", 7));

//CONTRUCAO DOS OBJETOS DOS OBJETOS DE HERPESTIDAE ---------------------------------------
  herpestidaes.push_back(Herpestidae("Herpestidae", "Catita", 2, "Suricato"));
  herpestidaes.push_back(Herpestidae("Herpestidae", "Carolina", 2, "Suricato"));

//CONTRUCAO DOS OBJETOS DOS OBJETOS DE CUIDADOR ---------------------------------------
  cuidadores.push_back(Cuidador("Ana Maria Rodrigues Lopes", "1234567799", 
    "(31) 99876-6923", "10/10/2000", "R$ 3000"));
  cuidadores.push_back(Cuidador("Fernanda Silva Santos", "9472567121", 
    "(31) 99123-8970", "08/02/1995", "R$ 4000"));

//CONTRUCAO DOS OBJETOS DE ALIMENTACAO ---------------------------------------
  alimentacoes.push_back(Alimentacao(2, "Peixe", 
    "Bobby só quis comer 2 porções de peixes hoje", "Bobby", cuidadores.at(0))); //alimentacoes.at(0)
  alimentacoes.push_back(Alimentacao(1, "Ração especial", 
    "Catita comeu direitinho", "Catita", cuidadores.at(1))); //alimentacoes.at(1)
  alimentacoes.push_back(Alimentacao(3, "Ração", 
    "Bobby só quis comer 2 porções de peixes hoje", "Carolina", cuidadores.at(1))); //alimentacoes.at(2)
  alimentacoes.push_back(Alimentacao(10, "Peixe", 
    "Tony comeu um pouco da comida do Bobby", "Tony", cuidadores.at(0))); //alimentacoes.at(3)
//FINAL DAS CONSTRUCOES ---------------------------------------

  double totalPeixeConsumido = 0;
  totalPeixeConsumido += 5*2 + ursidaes.at(0).calcularPeixesConsumidos(10);

  double totalRacaoConsumida = 0;
  totalRacaoConsumida += alimentacoes.at(1).getPorcao();
  totalRacaoConsumida += alimentacoes.at(2).getPorcao();

  alimentacoes.at(1).setPorcao(2);
  alimentacoes.at(2).setComida("Ração");

//ESCRITA NA TELA-----------------------------------------------

  std::cout << "--------------------------------";
  std::cout << std::endl << std::endl;
  std::cout << "Relatorio das alimentações";
  std::cout << std::endl;

  alimentacoes.at(0).print();
  std::cout << "Descricao: " << alimentacoes.at(0).getDescricao();
  std::cout << std::endl;

  alimentacoes.at(1).print();
  std::cout << "Descricao: " << alimentacoes.at(1).getDescricao();
  std::cout << std::endl;

  alimentacoes.at(2).print();
  std::cout << "Descricao: " << alimentacoes.at(2).getDescricao();
  std::cout << std::endl;

  alimentacoes.at(3).print();
  std::cout << "Descricao: " << alimentacoes.at(3).getDescricao();
  std::cout << std::endl;

  std::cout << std::endl << std::endl;
  std::cout << "--------------------------------";
  std::cout << std::endl << std::endl;
  std::cout << "Relatorio de kg de comida gastos";
  std::cout << std::endl << std::endl;
  std::cout << "Tipo de comida: Ração";
  std::cout << std::endl;
  std::cout << "Kg consumidos: " << totalRacaoConsumida;
  std::cout << std::endl << std::endl;
  std::cout << "Tipo de comida: Peixe";
  std::cout << std::endl;
  std::cout << "Kg consumidos: " << totalPeixeConsumido;
  std::cout << std::endl << std::endl;

  return 0;
}
