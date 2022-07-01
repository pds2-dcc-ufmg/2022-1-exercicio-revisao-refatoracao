#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main()
{
  std::vector<Animal*> Animais;

  Animais.push_back(new Animal("Ursidae", "Bobby", "13"));
  Animais.back()->print();

  Animais.push_back(new Animal("Ursidae", "Jorge", "1"));
  Animais.back()->print();

  Animais.push_back(new Animal("Herpestidae", "Bonina", "7"));
  Animais.back()->print();

  Animais.push_back(new Animal("Ursidade", "Felício", "3"));
  Animais.back()->print();

  //Talves um pair com Alimentação
  //Uma Hierarquia entre Animal e Ursidade e Herpestidae
  


  std::vector<Ursidae*> Ursidaes;

  Ursidaes.push_back(new Ursidae("Tony", "9", "Urso Pardo" , 10.5));
  Ursidaes.back()->print();

  Ursidaes.push_back(new Ursidae("Wanda", "10", "Urso Polar" , 7));
  Ursidaes.back()->print();

  //?
    
    
  std::vector<Herpestidae*> Herpestidaes;

  Herpestidaes.push_back(new Herpestidae ("Catita", "2" , "Suricato"));
  Herpestidaes.back()->print();

  Herpestidaes.push_back(new Herpestidae ("Carolina", "2" , "Suricato"));
//  Herpestidaes.back()->print();
  

  double kgPeixeConsumidos01 = 0;
  double kgPeixeConsumidos03 = 0;

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  

  std::vector<Cuidador*> Cuidadores;

  Cuidadores.push_back(new Cuidador("Ana Maria Rodrigues Lopes","1234567799", 
      "(31) 99876-6923" , "10/10/2000", "R$ 3000" ));
  
  Cuidadores.push_back(new Cuidador("Fernanda Silva Santos","9472567121", 
      "(31) 99123-8970" , "08/02/1995", "R$ 4000" ));


  std::vector<Alimentacao*> Alimentacoes;
  string auxDescricao;
  
  auxDescricao = "Bobby só quis comer 2 porções de peixes hoje";
  Alimentacoes.push_back(new Alimentacao(2,"Peixes" , auxDescricao, Cuidadores[0], "Bobby"));

  auxDescricao = "Catita comeu direitinho";
  Alimentacoes.push_back(new Alimentacao(1,"Ração especial" , auxDescricao, Cuidadores[1], "Catita"));

  auxDescricao = "Carolina estava com um apetite e tanto";
  Alimentacoes.push_back(new Alimentacao(3,"Ração" , auxDescricao, Cuidadores[1], "Carolina"));

  auxDescricao = "Tony comeu um pouco da comida do Bobby";
  Alimentacoes.push_back(new Alimentacao(10,"Ração" , auxDescricao, Cuidadores[0], "Bobby"));


  kgPeixeConsumidos01 = 5*2;
  kgRacaoConsumidos01 += Herpestidaes[0]->kgConsumidosDeRacao(Alimentacoes[1]->porcao);

  kgRacaoConsumidos02 += Herpestidaes[1]->kgConsumidosDeRacao(Alimentacoes[2]->porcao);
  kgPeixeConsumidos03 = Ursidaes[0]->calcula_peixes_consumidos(10);



  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

  for(Alimentacao* Al : Alimentacoes){
    Al->print();
    cout << " Descricao: " << Al->descricao << endl << endl;

  }
  

  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<endl;


  for(Animal* An : Animais){

    delete An;
    

  }
  Animais.clear();
  
  for(Ursidae* Ur : Ursidaes){

    delete Ur;

  }
  Ursidaes.clear();

  for(Herpestidae* He : Herpestidaes){

    delete He;

  }
  Herpestidaes.clear();

  for(Cuidador* Cui : Cuidadores){

    delete Cui;

  }
  Cuidadores.clear();

  for(Alimentacao* Al : Alimentacoes){

    delete Al;

  }
  Alimentacoes.clear();

  return 0;
}
