#include <iostream>
#include <vector>
#include "Animal/Herpestidae.hpp"
#include "Animal/Ursidae.hpp"
#include "Alimentacao/Alimentacao.hpp"

template <typename T>
T encontraPorNome(std::vector<T> dados, std::string nome) {
  for (auto elemento : dados) {
    if (elemento->getNome() == nome)
      return elemento;
  }
  return nullptr;
}

void cadastraAnimais(std::vector<Animal*> &animais) {

  Ursidae* novoUrsidae;
  Herpestidae* novoHerpestidae;

  novoUrsidae = new Ursidae("Bobby", 13);
  animais.push_back(novoUrsidae);

  novoUrsidae = new Ursidae("Jorge", 1);
  animais.push_back(novoUrsidae);

  novoHerpestidae = new Herpestidae("Bonina", 7);
  animais.push_back(novoHerpestidae);

  novoUrsidae = new Ursidae("Felício", 3);
  animais.push_back(novoUrsidae);

  novoUrsidae = new Ursidae("Tony", 9, "Urso Pardo");
  animais.push_back(novoUrsidae);

  novoUrsidae = new Ursidae("Wanda", 10, "Urso Polar");
  animais.push_back(novoUrsidae);

  novoHerpestidae = new Herpestidae("Catita", 2, "Suricato");
  animais.push_back(novoHerpestidae);

}

void cadastraCuidadores(std::vector<Cuidador*> &cuidadores) {

  Cuidador* novoCuidador;

  novoCuidador = new Cuidador("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", 3000);
  cuidadores.push_back(novoCuidador);

  novoCuidador = new Cuidador("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", 4000);
  cuidadores.push_back(novoCuidador);

}

void cadastraAlimentacoes(std::vector<Alimentacao*> &alimentacoes, std::vector<Animal*> &animais, std::vector<Cuidador*> &cuidadores) {

  Alimentacao* novaAlimentacao;
  
  novaAlimentacao = new Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje",
      encontraPorNome(animais, "Bobby"), 
      encontraPorNome(cuidadores, "Ana Maria Rodrigues Lopes"));
  alimentacoes.push_back(novaAlimentacao);

  novaAlimentacao = new Alimentacao(1, "Ração Especial", "Catita comeu direitinho",
      encontraPorNome(animais, "Catita"), 
      encontraPorNome(cuidadores, "Fernanda Silva Santos"));
  alimentacoes.push_back(novaAlimentacao);

  novaAlimentacao = new Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto",
      encontraPorNome(animais, "Carolina"), 
      encontraPorNome(cuidadores, "Fernanda Silva Santos"));
  alimentacoes.push_back(novaAlimentacao);

  novaAlimentacao = new Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby",
      encontraPorNome(animais, "Tony"), 
      encontraPorNome(cuidadores, "Ana Maria Rodrigues Lopes"));
  alimentacoes.push_back(novaAlimentacao);

}

std::vector<int> geraRelatorioComida (std::vector<Alimentacao*> &alimentacoes){

  std::vector<int> relatorio;
  int totalRacao = 0;
  int totalPeixe = 0;

  for (auto alimentacao : alimentacoes) {
    std::string familia = alimentacao->getAnimal()->getFamilia();
    if (familia == "Herpestidae"){
      totalRacao += alimentacao->getPorcao();
    } else if (familia == "Ursidae") {
      totalPeixe += alimentacao->getPorcao() * alimentacao->getAnimal()->getQuantidadePorcao();
    }
  }

  relatorio.push_back(totalRacao);
  relatorio.push_back(totalPeixe);

  return relatorio;

}

int main () {
  
  std::vector<Animal*> animais;
  std::vector<Cuidador*> cuidadores;
  std::vector<Alimentacao*> alimentacoes;
  
  cadastraAnimais(animais);
  cadastraCuidadores(cuidadores);
  
  // imprime a lista de animais
  for (auto animal : animais) {
    animal->imprimir();
    std::cout << std::endl;
  }

  // insere a Catarina
  Herpestidae* novoHerpestidae = new Herpestidae("Carolina", 2);
  animais.push_back(novoHerpestidae);

  cadastraAlimentacoes(alimentacoes, animais, cuidadores);

  // imprime relatório de alimentações
  std::cout << "\n--------------------------------\n" << std::endl;
  std::cout << "Relatório das alimentações\n" << std::endl;

  for (auto alimentacao : alimentacoes) {
    alimentacao->imprimir();
    std::cout << std::endl;
  }

  // imprime relatorio de comida gastos
  std::vector<int> relatorioComida = geraRelatorioComida(alimentacoes);

  std::cout << "\n\n--------------------------------\n" << std::endl;
  std::cout << "Relatorio de kg de comida gastos" << std::endl;

  std::cout << "Tipo de comida: Ração" << std::endl;
  std::cout << "Kg consumidos: " << relatorioComida[0] << "\n" << std::endl;

  std::cout << "Tipo de comida: Peixe" << std::endl;
  std::cout << "Kg consumidos: " << relatorioComida[1] << std::endl;

  return 0;
  
}
