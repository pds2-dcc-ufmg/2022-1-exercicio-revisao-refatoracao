#include <iostream>
#include <vector>

#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Alimentacao.hpp"

int main(){
  std::vector<Animal*> animais;
  animais.push_back(new Animal("Bobby", "Ursidae", 13));
  animais.push_back(new Animal("Jorge", "Ursidae", 1));
  animais.push_back(new Animal("Bonina", "Herpestidae", 7));
  animais.push_back(new Animal("Felício", "Ursidae", 3));
  animais.push_back(new Ursidae("Tony", "Urso Pardo", 9));
  animais.push_back(new Ursidae("Wanda", "Urso Polar", 10));
  animais.push_back(new Herpestidae("Catita", "Suricato", 2));
  animais.push_back(new Herpestidae("Carolina", "Suricato", 2));

  std::vector<Cuidador*> cuidadores;
  cuidadores.push_back(new Cuidador("Ana Maria Rodrigues Lopes"));
  cuidadores.push_back(new Cuidador("Fernanda Silva Santos"));

  std::vector<Alimentacao> alimentacao;
  alimentacao.push_back(Alimentacao(2, 5, "Peixes", cuidadores[0], animais[0]));
  alimentacao.push_back(Alimentacao(1, 1, "Ração Especial", cuidadores[1], animais[6]));
  alimentacao.push_back(Alimentacao(3, 1, "Ração", cuidadores[1], animais[7]));
  alimentacao.push_back(Alimentacao(10, 5, "Peixes", cuidadores[0], animais[4]));
  
  alimentacao[0].setDescricao("Bobby só quis comer 2 porções de peixes hoje");
  alimentacao[1].setDescricao("Catita comeu direitinho");
  alimentacao[2].setDescricao("Carolina estava com um apetite e tanto");
  alimentacao[3].setDescricao("Tony comeu um pouco da comida do Bobby");

  for(int i = 0; i < animais.size() - 1; i++){
    animais[i]->imprimirInformacoes();
  }

  std::cout <<" \n\n--------------------------------\n\nRelatorio das alimentações" << std::endl;
  for(int i = 0; i < alimentacao.size(); i++){
    alimentacao[i].imprimirRelatorio();
  }

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos\n" << std::endl;
  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << alimentacao[1].totalConsumido() + alimentacao[2].totalConsumido() <<std::endl;
  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << alimentacao[0].totalConsumido() + alimentacao[3].totalConsumido()<<std::endl;


  for(int i = 0; i < animais.size(); ++i) {
    delete animais[i]; 
  }
  animais.clear();
  for(int i = 0; i < cuidadores.size(); i++){
    delete cuidadores[i];
  }
  cuidadores.clear();

  return 0;
}
