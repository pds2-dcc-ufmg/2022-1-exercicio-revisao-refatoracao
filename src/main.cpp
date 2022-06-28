#include <iostream>
#include <vector>

#include "Alimentacao.hpp"
#include "Animal.hpp"
#include "Cuidador.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"

int main() {
  // Declarando animais genéricos, sem especificação de espécie.
  std::vector<Animal> listaAnimais;

  Animal bobby("13", "Ursidae", "Bobby");
  listaAnimais.push_back(bobby);

  Animal jorge("1", "Ursidae", "Jorge");
  listaAnimais.push_back(jorge);

  Animal bonina("7", "Herpestidae", "Bonina");
  listaAnimais.push_back(bonina);

  Animal felicio("3", "Ursidae", "Felício");
  listaAnimais.push_back(felicio);

  // Printando informações dos animais declarados.
  for (Animal i : listaAnimais) {
    i.infoAnimal();
  }

  // Declarando animais da espécie Ursidae.
  std::vector<Ursidae> listaUrsidae;

  Ursidae tony("9", "Ursidae", "Tony", "Urso Pardo");
  listaUrsidae.push_back(tony);

  Ursidae wanda("10", "Ursidae", "Wanda", "Urso Polar");
  listaUrsidae.push_back(wanda);

  // Printando informações sobre Ursidaes declarados.
  for (Ursidae i : listaUrsidae) {
    i.infoAnimal();
  }

  // Declarando animais da espécie Herpestidae.
  std::vector<Herpestidae> listaHerpestidae;

  Herpestidae catita("2", "Herpestidae", "Catita", "Suricato");
  listaHerpestidae.push_back(catita);

  Herpestidae carolina("2", "Herpestidae", "Carolina", "Suricato");
  listaHerpestidae.push_back(carolina);

  // Printando informação sobre Herpestidae declarado.
  catita.infoAnimal();

  // Declarando as cuidadoras do zoológico.
  Cuidador ana("R$ 3000", "Ana Maria Rodrigues Lopes", "1234567799",
               "(31) 99876-6923", "10/10/2000");

  Cuidador fernanda("R$ 4000", "Fernanda Silva Santos", "9472567121",
                    "(31) 99123-8970", "08/02/1995");

  // Declarando e setando informações sobre alimentação.
  Alimentacao alimentacao;

  bobby.setAlimentacaoInfo("Peixes",
                           "Bobby só quis comer 2 porções de peixes hoje",
                           ana.getNome(), 2);
  alimentacao.calculoPeixesConsumidos(bobby);

  catita.setAlimentacaoInfo("Ração especial", "Catita comeu direitinho",
                            fernanda.getNome(), 1);
  alimentacao.calculoRacaoConsumida(catita);

  carolina.setAlimentacaoInfo("Ração", "Carolina estava com um apetite e tanto",
                              fernanda.getNome(), 3);
  alimentacao.calculoRacaoConsumida(carolina);

  tony.setAlimentacaoInfo("Peixes", "Tony comeu um pouco da comida do Bobby",
                          ana.getNome(), 10);
  alimentacao.calculoPeixesConsumidos(tony);

  // Printando informações sobre alimentação.
  alimentacao.infoAlimentacao();
  alimentacao.relatorioFinal();

  return 0;
}
