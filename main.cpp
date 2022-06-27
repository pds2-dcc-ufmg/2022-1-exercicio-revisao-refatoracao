#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main()
{

  std::vector <Animal*> animais;
  
  animais.push_back(new Animal("13", "Ursidae","Bobby"));
  animais.push_back(new Animal("1","Ursidae", "Jorge"));
  animais.push_back(new Animal("7","Herpestidae","Bonina"));
  animais.push_back(new Animal("3","Ursidae","Felicio"));
  
  for(unsigned int i = 0; i < animais.size();i++){
    animais[i]->print();
    std::cout << std::endl;
  }

  std::vector <Ursidae*> ursos;
  
  ursos.push_back(new Ursidae("Tony","9", "Urso Pardo",10.5));
  ursos.push_back(new Ursidae("Wanda", "10", "Urso Polar", 7));

  for(unsigned int i = 0; i < ursos.size();i++){
    ursos[i]->print();
    std::cout << std::endl;
  }

  std::vector <Herpestidae*> herpestideos;
  
  herpestideos.push_back(new Herpestidae("Catita","2","Suricato"));
  herpestideos[0]->print();

  herpestideos.push_back(new Herpestidae("Carolina", "2", "Suricato"));

  std::vector <Cuidador> cuidadores;
    
  cuidadores.push_back(Cuidador("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", "R$ 3000"));
  cuidadores.push_back(Cuidador("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", "R$ 4000"));

  std::vector<Alimentacao*> relatorio;
    
  relatorio.push_back(new Alimentacao(2,"Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuidadores[0], "Bobby",ursos[0]->calculaPeixesConsumidos(10)));
  relatorio.push_back(new Alimentacao(1,"Ração especial","Catita comeu direitinho", cuidadores[1], "Catita",herpestideos[0]->consumoRacao(1)));
  relatorio.push_back(new Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", cuidadores[1],"Carolina", herpestideos[1]->consumoRacao(3)));
  relatorio.push_back(new Alimentacao(10, "Peixes","Tony comeu um pouco da comida do Bobby", cuidadores[0],"Tony", ursos[0]->calculaPeixesConsumidos(10)));

  std::cout << std::endl;
  std::cout <<"-------------Relatório das alimentações------------------- " << std::endl << std::endl;

  for(unsigned int i = 0; i < relatorio.size();i++){
    relatorio[i]->print();
    std::cout << std::endl;
  }

  double somaRacao = 0;
  for(unsigned int i = 0; i < relatorio.size();i++){
    if(relatorio[i]->getComida() == "Ração" || relatorio[i]->getComida() == "Ração especial"){
      somaRacao += relatorio[i]->getKg();
    }
  }

  double somaPeixes = 0;
  for(unsigned int i = 0; i < relatorio.size();i++){
    if(relatorio[i]->getComida() == "Peixes"){
      somaPeixes += relatorio[i]->getKg();
    }
  }

  std::cout << std::endl;
  std::cout <<"-------------Relatório de kg de comida gastos-------------------" << std::endl<< std::endl;
  std::cout << "Tipo de comida: Ração" << std::endl;
  std::cout << "Kg consumidos: " << somaRacao << std::endl << std::endl;

  std::cout << "Tipo de comida: Peixe" << std::endl;
  std::cout << "Kg consumidos: " << somaPeixes << std::endl;

  for(unsigned int i = 0; i < animais.size();i++){
    delete animais[i];
  }
  
  for(unsigned int i = 0; i < ursos.size();i++){
    delete ursos[i];
  }
  
  for(unsigned int i = 0; i < relatorio.size();i++){
    delete relatorio[i];
  }

  return 0;
}
