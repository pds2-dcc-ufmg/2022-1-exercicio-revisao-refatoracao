#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

#include <iostream>
#include <vector>

Animal cadastroAnimalSemEspecie(int _idade, std::string _familia, std::string _nome) {
  Animal auxiliar;
  auxiliar.setInformacoes(_idade, _familia, _nome, "");
  auxiliar.print();
  return auxiliar;
}

Ursidae cadastroUrsidae(int _idade, std::string _familia, std::string _nome, std::string _especie, double _kgPeixeDia) {
  Ursidae auxiliar;
  auxiliar.setInformacoes(_idade, _familia, _nome, _especie);
  auxiliar.setKgPeixeDia(_kgPeixeDia);
  auxiliar.print();
  return auxiliar;
}

Herpestidae cadastroHerpestidae(int _idade, std::string _familia, std::string _nome, std::string _especie, bool print) {
  Herpestidae auxiliar;
  auxiliar.setInformacoes(_idade, _familia, _nome, _especie);
  if(print)
    auxiliar.print();
  return auxiliar;
}

Cuidador cadastroCuidador(unsigned long int _cpf, std::string _salario, std::string _nome, std::string _telefone, std::string _dataAniversario) {
  Cuidador auxiliar;
  auxiliar.cadastrar(_cpf, _salario, _nome, _telefone, _dataAniversario);
  return auxiliar;
}

Alimentacao cadastroAlimentacao(int _porcao, Cuidador& _cuidador, std::string _tipoComida, std::string _descricao, std::string _nomeAnimal) {
  Alimentacao auxiliar;
  auxiliar.cadastrar(_porcao,_cuidador,_tipoComida,_descricao, _nomeAnimal);
  return auxiliar;
}

void imprimeRelatorioAlimentacoes(std::vector<Alimentacao> _alimentacoes) {
  std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;
  for(Alimentacao alimentacao : _alimentacoes) {
    alimentacao.print();
    std::cout << " Descricao: " << alimentacao.getDescricao() << std::endl << std::endl;
  }
}

int main() {
  // Cadastro de animais
  Animal animal1 = cadastroAnimalSemEspecie(13, "Ursidae", "Bobby");
  Animal animal2 = cadastroAnimalSemEspecie(1, "Ursidae", "Jorge");
  Animal animal3 = cadastroAnimalSemEspecie(7, "Herpestidae", "Bonina");
  Animal animal4 = cadastroAnimalSemEspecie(3, "Ursidae", "Felício");

  Ursidae ursidae1 = cadastroUrsidae(9, "Ursidae", "Tony", "Urso Pardo", 10.5);
  Ursidae ursidae2 = cadastroUrsidae(10, "Ursidae", "Wanda", "Urso Polar", 7);

  Herpestidae herp1 = cadastroHerpestidae(2, "Herpestidae", "Catita", "Suricato", true);
  Herpestidae herp2 = cadastroHerpestidae(2, "Herpestidae", "Carolina", "Suricato", false);

  // Cadastro de cuidadores
  Cuidador cuidador1 = cadastroCuidador(1234567799, "R$ 3000", "Ana Maria Rodrigues Lopes", "(31) 99876-6923", "10/10/2000");
  Cuidador cuidador2 = cadastroCuidador(9472567121, "R$ 4000", "Fernanda Silva Santos", "(31) 99123-8970", "08/02/1995");

  // Cadastro de alimentações
  std::vector<Alimentacao> alimentacoes;

  Alimentacao alim1 = cadastroAlimentacao(2, cuidador1, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", "Bobby");
  alim1.setKgPeixeConsumidos(ursidae2.calculaPeixesConsumidos(2));
  alimentacoes.push_back(alim1);
  
  Alimentacao alim2 = cadastroAlimentacao(1, cuidador2, "Ração especial", "Catita comeu direitinho", "Catita");
  alim2.setKgRacaoConsumidos(herp1.calculaConsumoRacaoKg(alim2.getPorcao()));
  alimentacoes.push_back(alim2);

  Alimentacao alim3 = cadastroAlimentacao(3, cuidador2, "Ração", "Carolina estava com um apetite e tanto", "Carolina");
  alim3.setKgRacaoConsumidos(herp2.calculaConsumoRacaoKg(alim3.getPorcao()));
  alimentacoes.push_back(alim3);

  Alimentacao alim4 = cadastroAlimentacao(10, cuidador1, "Peixes", "Tony comeu um pouco da comida do Bobby", "Tony");
  alim4.setKgPeixeConsumidos(ursidae1.calculaPeixesConsumidos(10)); 
  alimentacoes.push_back(alim4);

  //Relatorio de alimentacoes
  imprimeRelatorioAlimentacoes(alimentacoes);

  //Relatorio comida gasta
  //split loop 
  double kgRacaoConsumidosTotal = 0;
  for (Alimentacao alimentacao : alimentacoes) {
    kgRacaoConsumidosTotal += alimentacao.getKgRacaoConsumidos();
  }
  
  double kgPeixeConsumidosTotal = 0;
  for (Alimentacao alimentacao : alimentacoes) {
    kgPeixeConsumidosTotal += alimentacao.getKgPeixeConsumidos();
  }

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << kgRacaoConsumidosTotal << std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << kgPeixeConsumidosTotal << std::endl;

  return 0;
}
